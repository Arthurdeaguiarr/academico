# Cadastro de Equipamentos em C

Atividade prática da disciplina **Desenvolvimento de Algoritmos e Programação em C**.

Programa em linguagem C para cadastrar e consultar os equipamentos de um laboratório de informática. Os dados são armazenados em um arquivo de texto (`equipamentos.txt`), permitindo consultas posteriores.

## Funcionalidades

- **Cadastrar equipamento:** solicita nome, código de identificação e localização, e grava no arquivo.
- **Listar equipamentos:** lê o arquivo e exibe todos os equipamentos cadastrados na tela.
- **Sair:** encerra o programa.

## Como funciona

- Os dados são gravados com `fprintf()` e lidos com `fgets()`.
- O arquivo é aberto no modo `"a"` (append) ao cadastrar, preservando os registros existentes.
- Cada equipamento ocupa uma linha, no formato `nome;codigo;localizacao`.
- Campos vazios não são aceitos e o caractere `;` digitado pelo usuário é trocado por `,` para não quebrar o formato do arquivo.
- Se o arquivo ainda não existir, a listagem informa que não há equipamentos cadastrados.

## Arquivos do repositório

| Arquivo | Descrição |
|---|---|
| `equipamentos.c` | Código-fonte do programa |
| `equipamentos.txt` | Exemplo de arquivo com equipamentos cadastrados |
| `README.md` | Instruções de execução |

## Como compilar e executar

É necessário ter um compilador C instalado (por exemplo, GCC).

**Compilar:**

```bash
gcc equipamentos.c -o equipamentos
```

**Executar no Linux/macOS:**

```bash
./equipamentos
```

**Executar no Windows:**

```bash
equipamentos.exe
```

> Execute o programa na mesma pasta em que está (ou será criado) o `equipamentos.txt`.

## Exemplo de uso

```
==============================
  CADASTRO DE EQUIPAMENTOS
==============================
1 - Cadastrar equipamento
2 - Listar equipamentos
3 - Sair
Escolha uma opcao: 1

--- CADASTRAR EQUIPAMENTO ---
Nome do equipamento: Notebook Lenovo
Codigo de identificacao: LAB-005
Localizacao: Laboratorio 3
Equipamento cadastrado com sucesso!
```

Listagem:

```
--- EQUIPAMENTOS CADASTRADOS ---

Equipamento 1
  Nome       : Computador Dell OptiPlex
  Codigo     : LAB-001
  Localizacao: Laboratorio 1 - Bancada A
...
Total: 4 equipamento(s).
```

## Exemplo de `equipamentos.txt`

```
Computador Dell OptiPlex;LAB-001;Laboratorio 1 - Bancada A
Monitor LG 24 polegadas;LAB-002;Laboratorio 1 - Bancada A
Projetor Epson X49;LAB-003;Laboratorio 2
Switch TP-Link 24 portas;LAB-004;Sala de Rede
```

## Autor

Nome: _seu nome aqui_
Disciplina: Desenvolvimento de Algoritmos e Programação em C
