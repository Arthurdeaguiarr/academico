# Calculadora Geometrica em Linguagem C

## Objetivo do Programa

O objetivo deste programa e fornecer uma ferramenta de linha de comando eficiente e estruturada para a realizacao de 20 calculos geometricos diferentes, abrangendo tanto figuras planas quanto solidos espaciais (calculos de areas e volumes).

## Descricao Resumida do Funcionamento

O programa exibe um menu interativo contendo 20 opcoes numeradas de calculo. O usuario escolhe a opcao desejada digitando o numero correspondente. Com base nessa escolha, uma estrutura de decisao (`switch-case`) direciona o fluxo de execucao para a formula matematica especifica. O programa solicita os parametros necessarios (como lados, raios, bases ou alturas), processa os dados utilizando variaveis de ponto flutuante (`float`) e exibe o resultado formatado com duas casas decimais.

## Relacao das Funcoes Implementadas (Opcoes do Menu)

1. Area do Quadrado
2. Area do Retangulo
3. Area do Triangulo
4. Area do Circulo
5. Area do Trapezio
6. Area do Losango
7. Area do Paralelogramo
8. Area do Hexagono Regular
9. Area do Octogono Regular
10. Area da Esfera
11. Volume da Esfera
12. Area da Superficie do Cilindro
13. Volume do Cilindro
14. Area da Superficie do Cone
15. Volume do Cone
16. Area da Superficie do Cubo
17. Volume do Cubo
18. Area do Paralelepipedo
19. Volume do Paralelepipedo
20. Area da Coroa Circular

## Indicacao das Componentes e Bibliotecas Obrigatorias

* **`stdio.h`**: Biblioteca padrao de entrada e saida, responsavel pelas funcoes `printf` (para exibicao de menus e resultados) e `scanf` (para captura de dados digitados pelo usuario).
* **`math.h`**: Biblioteca matematica, utilizada para fornecer a funcao de raiz quadrada (`sqrtf`), essencial no calculo de poligonos regulares e cones.
* **Funcao `main**`: Ponto de entrada obrigatorio do programa em C, onde o fluxo de controle e a estrutura de selecao (`switch-case`) sao executados.
* **Macro `PI**`: Constante definida no pre-processador (`#define PI 3.14`) utilizada nos calculos envolvendo circulos, cilindros, cones e esferas.

## Instrucoes Basicas para Execucao do Programa

### Pre-requisitos

Certifique-se de ter um compilador de C instalado em seu sistema (por exemplo, o GCC).

### 1. Compilacao

Abra o terminal na pasta onde o arquivo do codigo (por exemplo, `calculadora.c`) esta salvo e execute o comando de compilacao abaixo. O argumento `-lm` e necessario para vincular a biblioteca matematica do C:

```bash
gcc calculadora.c -o calculadora -lm

```

### 2. Execucao

Apos a compilacao bem-sucedida, execute o programa gerado:

* **No Linux / macOS:**
```bash
./calculadora

```


* **No Windows:**
```cmd
calculadora.exe

```
