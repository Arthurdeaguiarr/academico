#include <stdio.h>
#include <math.h>

#define PI 3.14

int main() {
    int calculo;

    printf("--- Calculadora de Geometria ---\n");
    printf("Escolha o cálculo desejado:\n");
    printf(" 1 - Área do Quadrado            11 - Volume da Esfera\n");
    printf(" 2 - Área do Retângulo           12 - Área da Superfície do Cilindro\n");
    printf(" 3 - Área do Triângulo           13 - Volume do Cilindro\n");
    printf(" 4 - Área do Círculo             14 - Área da Superfície do Cone\n");
    printf(" 5 - Área do Trapézio            15 - Volume do Cone\n");
    printf(" 6 - Área do Losango             16 - Área da Superfície do Cubo\n");
    printf(" 7 - Área do Paralelogramo       17 - Volume do Cubo\n");
    printf(" 8 - Área do Hexágono Regular    18 - Área do Paralelepípedo\n");
    printf(" 9 - Área do Octógono Regular    19 - Volume do Paralelepípedo\n");
    printf("10 - Área da Esfera              20 - Área da Coroa Circular\n");
    printf("Opção: ");
    scanf("%d", &calculo);

    float lado, base, altura, base_maior, base_menor;
    float diag_maior, diag_menor, raio, raio_maior, raio_menor;
    float com, larg, alt, geratriz;
    float resultado = 0.0f;

    switch (calculo) {
        case 1:
            printf("Digite o lado do quadrado: ");
            scanf("%f", &lado);
            resultado = lado * lado;
            break;

        case 2:
            printf("Digite a base e a altura do retângulo: ");
            scanf("%f %f", &base, &altura);
            resultado = base * altura;
            break;

        case 3:
            printf("Digite a base e a altura do triângulo: ");
            scanf("%f %f", &base, &altura);
            resultado = (base * altura) / 2.0f;
            break;

        case 4:
            printf("Digite o raio do círculo: ");
            scanf("%f", &raio);
            resultado = PI * raio * raio;
            break;

        case 5:
            printf("Digite a base maior, a base menor e a altura do trapézio: ");
            scanf("%f %f %f", &base_maior, &base_menor, &altura);
            resultado = ((base_maior + base_menor) * altura) / 2.0f;
            break;

        case 6:
            printf("Digite a diagonal maior e a diagonal menor do losango: ");
            scanf("%f %f", &diag_maior, &diag_menor);
            resultado = (diag_maior * diag_menor) / 2.0f;
            break;

        case 7:
            printf("Digite a base e a altura do paralelogramo: ");
            scanf("%f %f", &base, &altura);
            resultado = base * altura;
            break;

        case 8:
            printf("Digite o lado do hexágono regular: ");
            scanf("%f", &lado);
            resultado = ((3.0f * sqrtf(3.0f)) / 2.0f) * lado * lado;
            break;

        case 9:
            printf("Digite o lado do octógono regular: ");
            scanf("%f", &lado);
            resultado = 2.0f * (1.0f + sqrtf(2.0f)) * lado * lado;
            break;

        case 10:
            printf("Digite o raio da esfera: ");
            scanf("%f", &raio);
            resultado = 4.0f * PI * raio * raio;
            break;

        case 11:
            printf("Digite o raio da esfera: ");
            scanf("%f", &raio);
            resultado = (4.0f / 3.0f) * PI * raio * raio * raio;
            break;

        case 12:
            printf("Digite o raio e a altura do cilindro: ");
            scanf("%f %f", &raio, &altura);
            resultado = 2.0f * PI * raio * (raio + altura);
            break;

        case 13:
            printf("Digite o raio e a altura do cilindro: ");
            scanf("%f %f", &raio, &altura);
            resultado = PI * raio * raio * altura;
            break;

        case 14:
            printf("Digite o raio e a altura do cone: ");
            scanf("%f %f", &raio, &altura);
            geratriz = sqrtf((raio * raio) + (altura * altura));
            resultado = PI * raio * (raio + geratriz);
            break;

        case 15:
            printf("Digite o raio e a altura do cone: ");
            scanf("%f %f", &raio, &altura);
            resultado = (PI * raio * raio * altura) / 3.0f;
            break;

        case 16:
            printf("Digite a aresta do cubo: ");
            scanf("%f", &lado);
            resultado = 6.0f * lado * lado;
            break;

        case 17:
            printf("Digite a aresta do cubo: ");
            scanf("%f", &lado);
            resultado = lado * lado * lado;
            break;

        case 18:
            printf("Digite o comprimento, a largura e a altura do paralelepípedo: ");
            scanf("%f %f %f", &com, &larg, &alt);
            resultado = 2.0f * (com * larg + com * alt + larg * alt);
            break;

        case 19:
            printf("Digite o comprimento, a largura e a altura do paralelepípedo: ");
            scanf("%f %f %f", &com, &larg, &alt);
            resultado = com * larg * alt;
            break;

        case 20:
            printf("Digite o raio maior e o raio menor da coroa circular: ");
            scanf("%f %f", &raio_maior, &raio_menor);
            if (raio_maior <= raio_menor) {
                printf("Erro: O raio maior deve ser maior que o raio menor.\n");
                return 1;
            }
            resultado = PI * ((raio_maior * raio_maior) - (raio_menor * raio_menor));
            break;

        default:
            printf("Opção de cálculo inválida.\n");
            return 1;
    }

    printf("\nResultado: %.2f\n", resultado);

    return 0;
}