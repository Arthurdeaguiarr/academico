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

## 3. Oportunidades de Melhoria e Boas Práticas

Para evoluir este algoritmo para um nível de qualidade de código pronto para produção, as seguintes refatorações são recomendadas[cite: 2]:

1. **Correção do Encadeamento de IMC**: Mover todas as instruções relativas ao cálculo de IMC para o interior da instrução `then` da condição `opcao == 1`[cite: 2].
2. **Modularização por Funções**: Separar as responsabilidades do sistema em funções específicas com assinaturas bem definidas[cite: 2]:
   - `calcular_imc(peso: Real, altura: Real) -> Real`[cite: 2]
   - `calcular_area_circulo(raio: Real) -> Real`[cite: 2]
   - `calcular_area_triangulo(base: Real, altura: Real) -> Real`[cite: 2]
3. **Tratamento de Entradas Inválidas e Laços de Repetição**: Envolver as capturas de dados em laços condicionais (`while`) para impedir que o sistema receba valores nulos, negativos ou opções fora do intervalo dos menus[cite: 2].
4. **Remoção de Pontos de Depuração**: Excluir a marcação de `breakpoint` do código final[cite: 2].

---

## 4. Conclusão

A implementação do projeto no Flowgorithm cumpriu o papel pedagógico de exercitar a construção lógica, o uso de operadores relacionais/aritméticos e a navegação por fluxogramas[cite: 2]. A análise do arquivo gerado destacou a importância crítica de mapear corretamente a hierarquia e o escopo das instruções, garantindo que o fluxo de execução respeite integralmente a intenção do projeto[cite: 2].
