# Desafio Monitoramento

**Nome:** Arthur de Aguiar Santos  
**Disciplina:** Algoritmos e Pensamento Computacional  
**Professora:** Profa. Karla Sartin  
**Título do projeto:** Desafio Monitoramento  

---

## Sobre o Problema
O sistema foi desenvolvido para resolver o desafio de monitoramento contínuo da temperatura em ambientes de clima extremo ou câmaras de resfriamento profundo, onde o controle rigoroso de patamares negativos (próximos ou abaixo de -14 °C) é essencial. O programa automatiza a recepção de dados de sensores, valida a sanidade das entradas, calcula métricas estatísticas essenciais (média, maior e menor valor), conta ocorrências críticas e aplica protocolos automáticos de segurança baseados em leituras consecutivas anômalas.

---

## Funcionamento do Programa

* **Definição do Limite de Temperatura:** O operador insere o teto seguro de temperatura. O programa valida se o valor numérico informado é estritamente superior ao limite físico mínimo do sensor (estabelecido em -14.0 °C).
* **Realização das Leituras:** O sistema inicia um ciclo contínuo onde aguarda a entrada sequencial das temperaturas fornecidas pelo sensor ou pelo operador.
* **Tratamento de Entradas Inválidas:** A aplicação utiliza uma estratégia robusta de leitura baseada em `fgets` e `sscanf`, bloqueando totalmente a entrada de strings, caracteres alfabéticos, valores mistos e rejeitando temperaturas fisicamente impossíveis (abaixo de -14.0 °C).
* **Identificação de Temperaturas Acima do Limite:** Cada leitura válida é comparada com o limite configurado. Se o valor for superior, o sistema contabiliza o evento e dispara um alerta imediato na tela.
* **Contagem de Temperaturas Consecutivas:** O sistema mantém um contador de violações consecutivas (`consecutivas_acima`). Caso a temperatura normalize (fique abaixo ou igual ao limite), o contador é imediatamente zerado.
* **Condição de Encerramento:** O monitoramento é interrompido de duas formas:
  * **Automática (Parada de Segurança):** Acionada imediatamente ao identificar 3 temperaturas consecutivas acima do limite.
  * **Manual:** Quando o operador insere o código sentinela `-999` a qualquer momento.

---

## Estruturas de Repetição Utilizadas

* **`do...while`:** Utilizada na etapa inicial para solicitar e validar o limite de temperatura.
  * *Justificativa:* O bloco de requisição precisa obrigatoriamente ser executado pelo menos uma vez, repetindo-se de forma controlada apenas se o usuário fornecer um valor inválido ou abaixo do limite físico.
* **`while (1)`:** Utilizada para construir o loop principal de monitoramento das leituras do sensor.
  * *Justificativa:* Como o número de leituras em um ambiente dinâmico é indefinido, o loop infinito simulado é ideal. O fluxo é controlado por condições de interrupção internas bem definidas (o código sentinela `-999` ou o atingimento da marca de segurança de 3 falhas consecutivas).

---

## Testes Realizados e Evidências

### Caso de Teste 1: Fluxo Normal e Encerramento Manual
* **Objetivo:** Validar a inserção de temperaturas válidas, o cálculo correto das estatísticas e o encerramento limpo via comando sentinela (`-999`).
* **Passos:** Inserir limite `50.0`, seguidos pelas leituras `45.0`, `55.0` (isolada), `40.0`, e finalizar com `-999`.
* **Resultado Esperado:** O sistema gera alerta para o valor alto isolado sem aplicar parada de segurança. O relatório final apresenta o total de leituras corretas, média, maior, menor e o status de encerramento pelo operador.

### Caso de Teste 2: Parada de Emergência por Leituras Consecutivas
* **Objetivo:** Verificar se o sistema aciona automaticamente a parada de segurança ao atingir exatamente 3 temperaturas consecutivas acima do limite configurado.
* **Passos:** Inserir limite `60.0`, seguidos pelas leituras `53.0` (normaliza), `66.0` (1/3), `97.0` (2/3) e `234.0` (3/3).
* **Resultado Esperado:** O programa identifica a terceira violação consecutiva, interrompe o monitoramento de forma autônoma e exibe o relatório final com o status de Parada de Segurança.

### Caso de Teste 3: Robustez contra Entradas Inválidas e Strings
* **Objetivo:** Garantir que o programa recuse strings, caracteres alfabéticos, valores mistos e temperaturas abaixo do limite físico de -20.0 °C sem quebrar o fluxo ou corromper as métricas.
* **Passos:** Tentar inserir `"cem"` e `-25.0` na definição do limite; posteriormente, tentar inserir `"45abc"` e `-30.0` durante as leituras do sensor, encerrando com `-999`.
* **Resultado Esperado:** Em cada tentativa inválida, o programa exibe uma mensagem de erro clara, descarta o dado corrompido, impede o incremento de leituras válidas e aguarda uma entrada correta.
