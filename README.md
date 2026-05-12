# 🧮 Matriz Case

<div align="center">

[![Linguagem](https://img.shields.io/badge/Linguagem-C-00599C?style=for-the-badge&logo=c&logoColor=white)](https://en.cppreference.com/w/c)
[![Compilador](https://img.shields.io/badge/Compilador-GCC-A42E2B?style=for-the-badge&logo=gnu&logoColor=white)](https://gcc.gnu.org/)
[![Plataforma](https://img.shields.io/badge/Plataforma-Linux%20%7C%20Windows%20%7C%20macOS-0078D6?style=for-the-badge&logo=linux&logoColor=white)]()
[![Status](https://img.shields.io/badge/Status-Concluído-28a745?style=for-the-badge)]()

</div>

> Programa em **C** para operações com matrizes 3×3 via menu interativo no terminal. Recebe duas matrizes como entrada e oferece 4 operações matemáticas distintas.

---

## ⚙️ Funcionalidades

| Opção | Operação | Descrição |
|---|---|---|
| `1` | **Subtração** | Calcula a matriz resultante `A - B` |
| `2` | **Multiplicação** | Calcula a matriz resultante `A * B` (elemento a elemento) |
| `3` | **Simetria** | Verifica se ambas as matrizes são simétricas (`A[i][j] == A[j][i]`) |
| `4` | **Igualdade** | Verifica se as matrizes `A` e `B` são iguais |

---

## 💻 Exemplo de Uso

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

## 🚀 Como Compilar e Executar

### Pré-requisitos

- Compilador GCC instalado — verifique com `gcc --version`

### Passos

```bash
# 1. Clone o repositório
git clone https://github.com/IgorASB/matriz-case.git
cd matriz-case

# 2. Compile
gcc matriz.c -o matriz-case

# 3. Execute
./matriz-case        # Linux/macOS
matriz-case.exe      # Windows
```

---

## 🧠 Conceitos de C Aplicados

| Conceito | Aplicação no Projeto |
|---|---|
| Arrays multidimensionais (`int[3][3]`) | Armazenamento das matrizes A e B |
| Laços aninhados (`for` dentro de `for`) | Leitura dos elementos e cálculo das operações |
| `switch...case` | Controle do menu de operações |
| Lógica de verificação | Algoritmo de simetria (`A[i][j] == A[j][i]`) e igualdade entre matrizes |
| `scanf` / `printf` | Entrada dos elementos e exibição dos resultados |

---

## 📁 Estrutura do Projeto

```
matriz-case/
├── matriz.c   # Código-fonte principal
└── README.md
```

---

## 👤 Autor

Feito por **Igor Amaral** — Estudante de Ciência da Computação

[![GitHub](https://img.shields.io/badge/GitHub-IgorASB-181717?style=flat&logo=github)](https://github.com/IgorASB)
