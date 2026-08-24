# Atividade: Desenvolvimento de Calculadoras Multiuso em Flowgorithm

**Aluno:** Arthur de Aguiar Santos  

---

## Objetivo do Programa

O objetivo deste programa é aplicar os conceitos de lógica de programação, estruturas condicionais e manipulação de variáveis desenvolvidos no Flowgorithm. O algoritmo foi criado para automatizar cálculos rotineiros — biométricos e geométricos — em uma única interface sequencial e intuitiva para o usuário.

---

## Descrição Resumida do Funcionamento

O programa inicia exibindo um menu principal no qual o usuário escolhe a operação desejada. Dependendo da opção selecionada, o fluxo direciona a execução para um módulo específico:

- **Módulo de IMC**: O sistema solicita as medidas de peso e altura, realiza o cálculo e retorna a classificação correspondente.
- **Módulo de Áreas Geométricas**: O sistema abre um submenu com diferentes formas geométricas, solicita os dados necessários da figura escolhida, realiza a operação aritmética e exibe o resultado final da área.

Ao término do fluxo selecionado, o programa exibe as informações formatadas na tela.

---

## Relação das Funções Implementadas

O programa abrange quatro rotinas principais de cálculo geométrico, além da rotina biométrica:

1. **Cálculo da Área do Quadrado**: Multiplica a medida do lado por si mesma ($A = L^2$).
2. **Cálculo da Área do Retângulo**: Multiplica a base pela altura ($A = b \times h$).
3. **Cálculo da Área do Triângulo**: Multiplica a base pela altura e divide o resultado por dois ($A = \frac{b \times h}{2}$).
4. **Cálculo da Área do Círculo**: Eleva o raio ao quadrado e multiplica pela constante Pi ($A = \pi \times r^2$).

---

## Indicação das Funções Obrigatórias

Conforme os requisitos da atividade, as duas funcionalidades estruturais obrigatórias integradas ao algoritmo são:

1. **Calculadora de IMC**: Função responsável por relacionar massa corporal e estatura, classificando o resultado entre faixas de saúde (Abaixo do peso, Peso ideal, Sobrepeso e Obesidade).
2. **Calculadora de Área**: Função responsável por processar as medidas de figuras geométricas planas através da seleção via menu.

---

## Instruções Básicas para Execução do Programa

1. Baixe e instale o software **Flowgorithm** em seu computador.
2. Abra o arquivo do projeto (`flowalgoritmo-calculadoras.fprg`) na ferramenta.
3. Clique no botão de execução (ícone de **Play** verde na barra superior) ou pressione **F5**.
4. No console de exibição:
   - Digite `1` para acessar a **Calculadora de IMC** ou `2` para a **Calculadora de Área**.
   - Se escolher a opção `2`, digite o número correspondente à forma geométrica desejada (`1` para Quadrado, `2` para Retângulo, `3` para Triângulo e `4` para Círculo).
5. Insira os valores numéricos solicitados (como peso, altura, base, altura ou raio) e pressione **Enter** após cada digitação para visualizar o resultado.
