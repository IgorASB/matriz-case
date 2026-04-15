# 🧮 Matriz Case

Programa em **C** para operações com matrizes 3×3 via menu interativo no terminal.

---

## 📋 Sobre o Projeto

O **Matriz Case** é um programa de linha de comando desenvolvido em linguagem C que recebe duas matrizes 3×3 como entrada e oferece um menu com 4 operações matemáticas distintas para serem aplicadas sobre elas.

Projeto desenvolvido como exercício prático de programação em C, abordando manipulação de arrays multidimensionais, laços aninhados e estruturas de controle.

---

## ⚙️ Funcionalidades

| Opção | Operação | Descrição |
|-------|----------|-----------|
| 1 | **Subtração** | Calcula a matriz resultante `A - B` |
| 2 | **Multiplicação** | Calcula a matriz resultante `A * B` (elemento a elemento) |
| 3 | **Simetria** | Verifica se ambas as matrizes são simétricas (`A[i][j] == A[j][i]`) |
| 4 | **Igualdade** | Verifica se as matrizes `A` e `B` são iguais |

---

## 🚀 Como Compilar e Executar

### Pré-requisitos

- Compilador GCC instalado

### Compilação

```bash
gcc -o matriz-case matriz.c
```

### Execução

```bash
./matriz-case
```

### Exemplo de uso

```
Digite as duas MATRIZES(A e B):
Elemento A[0][0]: 1
Elemento A[0][1]: 2
...

MENU DE OPÇÕES:
Opção 1 - Subtração de matrizes
Opção 2 - Multiplicação de matrizes
Opção 3 - Matrizes simétrica
Opção 4 - Matrizes iguais
```

---

## 🗂️ Estrutura do Projeto

```
matriz-case/
└── matriz.c    # Código-fonte principal
```

---

## 🛠️ Tecnologias

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

---

## 👤 Autor

**Igor** — [@IgorASB](https://github.com/IgorASB)
