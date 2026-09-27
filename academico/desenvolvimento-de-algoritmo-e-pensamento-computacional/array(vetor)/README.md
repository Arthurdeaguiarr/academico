# Trabalho Individual: Array(vetor)

- **Nome:** Arthur de Aguiar Santos
- **Instituição:** UDF
- **Curso:** Ciência da Computação
- **Matéria:** Algoritmos e Pensamento Computacional

## Objetivo da Atividade

O objetivo desta atividade é desenvolver um programa em linguagem C que aplique de forma prática os principais conceitos fundamentais da programação estruturada, tais como:

- Utilização de arrays (vetores) unidimensionais com 20 posições;
- Emprego de estruturas de repetição (`for`) para preenchimento e varredura de dados;
- Aplicação de estruturas condicionais (`if`, `else if`, `else`) para validações lógicas e matemáticas;
- Manipulação de entrada de dados (`scanf`) e formatação de saídas no console (`printf`).

## Explicação Resumida da Lógica Utilizada

O programa foi estruturado em três etapas principais:

1. **Preenchimento do Vetor:** Utiliza-se uma estrutura de repetição `for` que executa 20 vezes para ler os números inteiros fornecidos pelo usuário e armazená-los sequencialmente em um vetor de tamanho fixo (`#define TAM 20`).

2. **Processamento e Análise de Dados:** Em um segundo loop, o vetor é percorrido para realizar as seguintes operações simultaneamente:
   - **Múltiplos de 3:** Verifica se o elemento é diferente de zero e se o resto da divisão por 3 é igual a zero (`vetor[i] % 3 == 0`), acumulando a soma.
   - **Números Pares:** Identifica se o número é divisível por 2 (`vetor[i] % 2 == 0`), somando seu valor e incrementando o contador de números pares para o cálculo posterior da média.
   - **Positivos e Negativos:** Conta a quantidade de valores estritamente maiores ou menores que zero, garantindo que o número 0 não seja contabilizado em nenhuma dessas duas categorias.
   - **Maior e Menor Valor:** Inicializados com o primeiro elemento do vetor, as variáveis de controle são atualizadas sempre que o loop encontra um número maior ou menor que o valor atual armazenado.

3. **Exibição de Resultados:** O programa imprime as informações calculadas de forma organizada. Por fim, todos os 20 elementos do vetor são exibidos em formato de lista.

```
Elemento [1]: 6
Elemento [2]: 5
Elemento [3]: 4
Elemento [4]: 8
Elemento [5]: 10
Elemento [6]: 123
Elemento [7]: 12
Elemento [8]: 12
Elemento [9]: 323
Elemento [10]: 43
Elemento [11]: 67
Elemento [12]: 90
Elemento [13]: 60
Elemento [14]: 30
Elemento [15]: 12
Elemento [16]: 12
Elemento [17]: 256
Elemento [18]: 34
Elemento [19]: 35
Elemento [20]: 98
```

### Exemplo de Saída no Console

```
========================================
         RESULTADOS DA ANALISE          
========================================
- Soma dos elementos multiplos de 3: 357
- Media dos elementos pares: 46.00
- Quantidade de numeros positivos: 20
- Quantidade de numeros negativos: 0
- Maior valor armazenado: 323
- Menor valor armazenado: 4

Elementos armazenados no vetor:
[ 6, 5, 4, 8, 10, 123, 12, 12, 323, 43, 67, 90, 60, 30, 12, 12, 256, 34, 35, 98 ]
========================================
```

## Captura de Tela da Execução

<img width="1349" height="585" alt="teste" src="https://github.com/user-attachments/assets/e4a43d14-49b4-4c93-9f2b-de6cb45e4eb5" />

Abaixo segue a evidência da execução correta do programa com os dados testados: *(Ver print da tela anexado ao relatório do projeto)*
