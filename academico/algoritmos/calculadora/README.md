# Calculadoras em Flowgorithm: IMC e Áreas Geométricas

Este repositório reúne o algoritmo que desenvolvi no Flowgorithm para praticar estruturas de decisão, manipulação de variáveis e fluxo de execução de dados. O objetivo do projeto foi integrar duas utilidades práticas em um único programa: uma calculadora de Índice de Massa Corporal (IMC) e uma calculadora para área de figuras geométricas.

---

## Visão Geral do Projeto

O programa funciona com base em um menu de navegação que permite ao usuário escolher qual operação deseja realizar logo no início da execução.

1. **Calculadora de IMC**: Recebe a altura e o peso do usuário, calcula o valor do IMC e indica em qual faixa de peso a pessoa se encontra.
2. **Calculadora de Áreas**: Apresenta um submenu com quatro opções de formas geométricas (quadrado, retângulo, triângulo e círculo), solicita as medidas necessárias para a opção escolhida e retorna o resultado da área.

---

## Conceitos Lógicos e Aprendizados

A construção desse fluxo me permitiu exercitar conceitos fundamentais da lógica de programação diretamente no ambiente gráfico de fluxogramas.

### Controle de Fluxo e Condicionais Encadeadas
Para lidar com múltiplas escolhas de navegação e faixas de resultados, utilizei estruturas de decisão aninhadas (`se / senão`).

- **Navegação de Menus**: Como o Flowgorithm trabalha de forma sequencial, estruturei condicionais para direcionar o usuário entre as ferramentas e, no caso da calculadora de áreas, entre as figuras geométricas disponíveis.
- **Classificação do IMC**: Utilizei comparações condicionais para encaixar o valor calculado dentro das faixas estabelecidas de saúde:
  - IMC abaixo de 18.5: Abaixo do peso
  - IMC entre 18.5 e 24.9: Peso ideal
  - IMC entre 25.0 e 29.9: Sobrepeso
  - IMC acima de 30.0: Obesidade

### Tipagem de Dados e Variáveis
Trabalhei com dois tipos principais de dados durante a execução do programa:

- **Inteiro (`Integer`)**: Aplicado às variáveis que controlam a escolha dos menus, onde o usuário precisa digitar apenas um número de opção.
- **Real (`Real`)**: Aplicado a todas as variáveis que envolvem medidas e cálculos matemáticos (peso, altura, raio, base, etc.), garantindo a precisão necessária para números decimais.

### Expressões Matemáticas
Cada cálculo foi convertido em uma expressão algorítmica simples de entender:

- **Área do Quadrado**: `lado * lado`
- **Área do Retângulo**: `base * altura`
- **Área do Triângulo**: `(base * altura) / 2`
- **Área do Círculo**: `3.14 * (raio * raio)`
- **Cálculo do IMC**: `peso / (altura * altura)`

## Conclusão

Desenvolver este projeto no Flowgorithm foi um ótimo exercício para reforçar o pensamento estruturado e a organização de etapas em um sistema. A prática ajudou a consolidar o entendimento sobre como organizar entradas, aplicar condicionais e exibir saídas de forma coerente.
