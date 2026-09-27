#include <stdio.h>

#define TAM 20

int main() {
    int vetor[TAM];
    int i;
    
    int soma_mult_3 = 0;
    int soma_pares = 0;
    int qtd_pares = 0;
    int qtd_positivos = 0;
    int qtd_negativos = 0;
    int maior, menor;

    // leitura dos 20 números inteiros digitados pelo usuário
    printf("Digite %d numeros inteiros:\n", TAM);
    for (i = 0; i < TAM; i++) {
        printf("Elemento [%d]: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // inicialização do maior e menor com o primeiro elemento do vetor
    maior = vetor[0];
    menor = vetor[0];

    // processamento dos dados (percorrendo o vetor)
    for (i = 0; i < TAM; i++) {
        // soma dos elementos múltiplos de 3 (excluindo o zero para evitar ambiguidade matemática, ou incluindo conforme a regra padrão)
        if (vetor[i] != 0 && vetor[i] % 3 == 0) {
            soma_mult_3 += vetor[i];
        }

        // verificação de elementos pares para posterior cálculo da média
        if (vetor[i] % 2 == 0) {
            soma_pares += vetor[i];
            qtd_pares++;
        }

        // contagem de positivos e negativos (o zero não é contabilizado em nenhum)
        if (vetor[i] > 0) {
            qtd_positivos++;
        } else if (vetor[i] < 0) {
            qtd_negativos++;
        }

        // determinação do maior e do menor valor
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    // exibição organizada dos resultados
    printf("\n========================================\n");
    printf("           RESULTADOS DA ANALISE        \n");
    printf("========================================\n");

    // soma dos múltiplos de 3
    printf("- Soma dos elementos multiplos de 3: %d\n", soma_mult_3);

    // média dos elementos pares (com tratamento para evitar divisão por zero)
    if (qtd_pares > 0) {
        float media_pares = (float)soma_pares / qtd_pares;
        printf("- Media dos elementos pares: %.2f\n", media_pares);
    } else {
        printf("- Media dos elementos pares: Nao ha numeros pares no vetor.\n");
    }

    // quantidade de positivos e negativos
    printf("- Quantidade de numeros positivos: %d\n", qtd_positivos);
    printf("- Quantidade de numeros negativos: %d\n", qtd_negativos);

    // maior e menor valor
    printf("- Maior valor armazenado: %d\n", maior);
    printf("- Menor valor armazenado: %d\n", menor);

    // apresentação de todos os elementos armazenados no vetor
    printf("\nElementos armazenados no vetor:\n[ ");
    for (i = 0; i < TAM; i++) {
        printf("%d", vetor[i]);
        if (i < TAM - 1) {
            printf(", ");
        }
    }
    printf(" ]\n");
    printf("========================================\n");

    return 0;
}
