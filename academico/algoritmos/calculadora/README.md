# Documentação de Aprendizado: Implementação de Calculadoras em Flowgorithm

Este repositório registra a análise lógica, o aprendizado estrutural e a avaliação técnica dos algoritmos desenvolvidos na ferramenta Flowgorithm[cite: 2]. O projeto abrange a criação de dois utilitários distintos em um mesmo fluxo executável: uma Calculadora de Índice de Massa Corporal (IMC) e uma Calculadora Geométrica de Áreas[cite: 2].

---

## 1. Visão Geral do Algoritmo

O arquivo fonte expressa um fluxo de tomada de decisão estruturado para gerenciar dois módulos principais de cálculo[cite: 2]. O fluxo inicial solicita ao usuário a seleção da funcionalidade desejada, direcionando a execução para a ramificação correspondente[cite: 2].

### Estrutura Geral do Fluxo
1. **Seleção de Módulo**: Entrada numérica (1 para IMC, 2 para Áreas)[cite: 2].
2. **Ramificação do IMC**: Solicitação do peso e da altura, cálculo da taxa e classificação por faixas de corte[cite: 2].
3. **Ramificação de Áreas**: Submenu para escolha do formato geométrico (Quadrado, Retângulo, Triângulo e Círculo), leitura das dimensões e aplicação da respectiva fórmula matemática[cite: 2].
4. **Tratamento de Exceções**: Retorno de mensagem de erro para opções inválidas na seleção primária[cite: 2].

---

## 2. Análise Estrutural e Aprendizado Adquirido

### 2.1. Controle de Fluxo e Aninhamento Condicional
A construção do algoritmo exigiu a aplicação intensiva de estruturas condicionais encadeadas (blocos `if-else` aninhados)[cite: 2]. 

- **Calculadora de Áreas**: A seleção entre quatro formas geométricas foi resolvida encadeando quatro níveis de decisões condicionais[cite: 2]. Esse padrão exemplifica como escolhas múltiplas são mapeadas na ausência de estruturas nativas como `switch/case`[cite: 2].
- **Classificação do IMC**: A categorização dos resultados baseou-se em comparações encadeadas de limite inferior e superior, garantindo que o valor numérico do IMC seja avaliado em faixas mutuamente exclusivas[cite: 2]:
  - `IMC < 18.5`: Abaixo do peso[cite: 2]
  - `18.5 <= IMC < 25.0`: Peso ideal[cite: 2]
  - `25.0 <= IMC < 30.0`: Sobrepeso[cite: 2]
  - `IMC >= 30.0`: Obesidade[cite: 2]

### 2.2. Tipagem de Dados e Declaração de Variáveis
Foi necessário delimitar estritamente a tipagem de dados utilizada pelo interpretador[cite: 2]:
- **`Integer`**: Utilizado estritamente para variáveis de controle e navegabilidade de menus (`opcao`, `areas`)[cite: 2].
- **`Real`**: Aplicado às variáveis que exigem precisão decimal, tais como medidas geométricas (`base`, `altura`, `raio`, `quadrado`, `retangulo`, `triangulo`, `circulo`) e biométricas (`peso`, `altura`, `imc`)[cite: 2].

### 2.3. Validação de Fórmulas Matemáticas e Expressões
Cada sub-rotina de cálculo exigiu a tradução de fórmulas matemáticas para expressões algébricas computacionais válidas[cite: 2]:
- **Círculo**: Aplicação da aproximação A = π × r², traduzida como `3.14 * (raio * raio)`[cite: 2].
- **Triângulo**: Aplicação do cálculo de área triangular A = (b × h) / 2, traduzida como `base * altura / 2`[cite: 2].
- **IMC**: Aplicação da relação entre massa e estatura ao quadrado IMC = peso / altura², traduzida como `peso / (altura * altura)`[cite: 2].

---

## 3. Análise Crítica e Falhas de Arquitetura Identificadas

A revisão por pares do código XML gerado pelo Flowgorithm revelou inconsistências graves na ordem de execução dos blocos, limitações de escopo e gargalos de manutenção[cite: 2].

### 3.1. Erro de Sequenciamento no Fluxo do IMC
No código implementado, a execução do bloco de cálculo do IMC (leitura de `peso` e `altura`, cálculo de `imc` e avaliação do resultado) está disposta **fora e após** a estrutura condicional principal (`if opcao == 1`)[cite: 2].

- **Efeito Prático**: Quando o usuário seleciona a opção `1` (Calculadora de IMC), o programa apenas exibe a mensagem de texto `"Calculadora de IMC"`, ignora os dados de entrada na ramificação e segue para o fim do bloco condicional[cite: 2]. Em seguida, o fluxo obriga a execução do cálculo do IMC independentemente da opção escolhida na entrada inicial (mesmo se o usuário tiver escolhido a opção `2` para calcular áreas)[cite: 2].
- **Causa Raiz**: As instruções de leitura e processamento do IMC foram declaradas no escopo global da função `Main`, logo após o término da estrutura de seleção `if/else`, em vez de estarem contidas no bloco `then` correspondente à `opcao == 1`[cite: 2].

### 3.2. Presença de Ponto de Parada (`breakpoint`) Indevido
Existe uma instrução `<breakpoint expression="" always="True"/>` inserida dentro do bloco `else` da seleção primária[cite: 2]. Em ambiente de execução gráfica, essa instrução interrompe forçadamente o fluxo do programa, prejudicando a experiência de uso contínuo[cite: 2].

### 3.3. Redundância de Declarações e Escopo Local
As variáveis de entrada e resultado geométrico (`base`, `altura`, `quadrado`, `retangulo`, etc.) foram declaradas individualmente dentro de cada bloco condicional do submenu[cite: 2]. Embora isso isole o escopo, gera redundância e repetição de código[cite: 2].

### 3.4. Ausência de Validação do Módulo de Áreas
A verificação de opção inválida (`"A opção não existe"`) foi applied apenas no menu principal[cite: 2]. Caso o usuário insira um valor diferente de 1, 2, 3 ou 4 no submenu de áreas, o programa encerra a execução sem emitir alerta ao usuário[cite: 2].

---

## 4. Oportunidades de Melhoria e Boas Práticas

Para evoluir este algoritmo para um nível de qualidade de código pronto para produção, as seguintes refatorações são recomendadas[cite: 2]:

1. **Correção do Encadeamento de IMC**: Mover todas as instruções relativas ao cálculo de IMC para o interior da instrução `then` da condição `opcao == 1`[cite: 2].
2. **Modularização por Funções**: Separar as responsabilidades do sistema em funções específicas com assinaturas bem definidas[cite: 2]:
   - `calcular_imc(peso: Real, altura: Real) -> Real`[cite: 2]
   - `calcular_area_circulo(raio: Real) -> Real`[cite: 2]
   - `calcular_area_triangulo(base: Real, altura: Real) -> Real`[cite: 2]
3. **Tratamento de Entradas Inválidas e Laços de Repetição**: Envolver as capturas de dados em laços condicionais (`while`) para impedir que o sistema receba valores nulos, negativos ou opções fora do intervalo dos menus[cite: 2].
4. **Remoção de Pontos de Depuração**: Excluir a marcação de `breakpoint` do código final[cite: 2].

---

## 5. Conclusão

A implementação do projeto no Flowgorithm cumpriu o papel pedagógico de exercitar a construção lógica, o uso de operadores relacionais/aritméticos e a navegação por fluxogramas[cite: 2]. A análise do arquivo gerado destacou a importância crítica de mapear corretamente a hierarquia e o escopo das instruções, garantindo que o fluxo de execução respeite integralmente a intenção do projeto[cite: 2].
