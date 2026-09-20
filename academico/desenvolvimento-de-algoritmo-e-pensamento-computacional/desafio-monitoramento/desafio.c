#include <stdio.h>
#include <string.h>

int main() {
    float limite, temp;
    float soma = 0.0f, maior = 0.0f, menor = 0.0f;
    int total_leituras = 0;
    int acima_limite = 0;
    int consecutivas_acima = 0;
    int status_emergencia = 0;

    const float temp_minima_fisica = -15.0f;
    char buffer[100];

    printf("========================================\n");
    printf("   SISTEMA DE MONITORAMENTO INDUSTRIAL  \n");
    printf("========================================\n");
    
    do {
        printf("Digite o limite de temperatura seguro (acima de %.1f C): ", temp_minima_fisica);
        
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            continue;
        }

        buffer[strcspn(buffer, "\n")] = 0;

        //(garante que não há texto misturado)
        char resto[50];
        if (sscanf(buffer, "%f %s", &limite, resto) != 1 || limite <= temp_minima_fisica) {
            printf("[ERRO] Entrada invalida. Digite apenas um valor numerico valido (> %.1f).\n", temp_minima_fisica);
        } else {
            break;
        }
    } while (1);

    printf("\n[INFO] Insira as temperaturas do sensor (Minimo fisico: %.1f C).\n", temp_minima_fisica);
    printf("[INFO] Digite -999 a qualquer momento para encerrar manualmente.\n\n");

    //loop de monitoramento
    while (1) {
        printf("Leitura %d: ", total_leituras + 1);
        
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            continue;
        }

        buffer[strcspn(buffer, "\n")] = 0;

        //(rejeita strings e valores mistos)
        char resto[50];
        if (sscanf(buffer, "%f %s", &temp, resto) != 1) {
            printf("[ERRO] Entrada rejeitada. Nao sao permitidas letras ou caracteres invalidos.\n");
            continue;
        }

        //condição de encerramento manual 
        if (temp == -999.0f) {
            break;
        }

        //validação da faixa física do sensor
        if (temp < temp_minima_fisica) {
            printf("[ERRO] Temperatura abaixo do limite fisico do sensor (%.1f C).\n", temp_minima_fisica);
            continue;
        }

        //atualização de métricas
        if (total_leituras == 0) {
            maior = temp;
            menor = temp;
        } else {
            if (temp > maior) maior = temp;
            if (temp < menor) menor = temp;
        }

        soma += temp;
        total_leituras++;

        //segurança e limite
        if (temp > limite) {
            acima_limite++;
            consecutivas_acima++;
            printf("  -> ALERTA: Acima do limite! (Consecutivas: %d/3)\n", consecutivas_acima);

            if (consecutivas_acima >= 3) {
                status_emergencia = 1;
                printf("\n[CRITICO] Parada de emergencia acionada: 3 leituras consecutivas acima do limite!\n");
                break;
            }
        } else {
            consecutivas_acima = 0;
        }
    }

    //relatório Final
    printf("\n========================================\n");
    printf("            RELATORIO FINAL             \n");
    printf("========================================\n");
    
    if (status_emergencia) {
        printf("Status de Encerramento: PARADA DE SEGURANCA\n");
    } else {
        printf("Status de Encerramento: ENCERRADO PELO OPERADOR\n");
    }

    if (total_leituras > 0) {
        float media = soma / total_leituras;
        printf("Total de leituras validas : %d\n", total_leituras);
        printf("Temperatura media         : %.2f C\n", media);
        printf("Maior temperatura         : %.2f C\n", maior);
        printf("Menor temperatura         : %.2f C\n", menor);
        printf("Leituras acima do limite  : %d\n", acima_limite);
    } else {
        printf("Nenhuma leitura valida foi registrada.\n");
    }
    printf("========================================\n");

    return 0;
}
