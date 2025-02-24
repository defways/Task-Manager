# Gerenciador de Tarefas

## Descrição
Este código foi escrito em C++ e implementa um gerenciador de tarefas, permitindo ao usuário adicionar, listar e remover tarefas em um sistema simples de linha de comando de forma simplificada.

## Linguagem e Tipos de Código
- **Linguagem:** O código foi escrito em C++
- **Funcionalidades:** 
Classe `GerenciadorTarefas` (Principal):

## Atributos:
- `tarefas` (do tipo `vector<string>`): Um vetor que armazena as tarefas em formato de string.
Métodos:
- `adicionarTarefa(const string& tarefa`): Recebe uma string representando uma tarefa e a adiciona ao vetor `tarefas`. Exibe uma mensagem de sucesso após a adição.

- `listarTarefas()`: Exibe todas as tarefas armazenadas no vetor `tarefas`. Se o vetor estiver vazio, uma mensagem indicando que não há tarefas é exibida.

- `removerTarefa(int indice)`: Recebe um índice (número inteiro) que indica a tarefa a ser removida. O índice deve estar dentro do intervalo de tarefas existentes. Se o índice for válido, a tarefa correspondente é removida do vetor e uma mensagem de sucesso é exibida. Caso contrário, uma mensagem de erro é exibida.

- **Objetivo**: Implementa um gerenciador de tarefas, permitindo ao usuário adicionar, listar e remover

Função `main`
- O programa principal oferece um menu interativo para o usuário:

- Opção 1: Adicionar Tarefa: O usuário insere uma tarefa que será adicionada à lista.
- Opção 2: Listar Tarefas: Exibe todas as tarefas cadastradas.
- Opção 3: Remover Tarefa: O usuário informa o índice de uma tarefa para removê-la da lista.
- Opção 4: Sair: Finaliza o programa.
- O loop `do-while` continua exibindo o menu até que o usuário escolha a opção de sair (4).
- O programa utiliza a função `cin.ignore()` para garantir que a leitura do usuário seja feita corretamente, ignorando o caractere de nova linha (`\n`) que pode ficar na entrada após uma leitura anterior com `cin`.

## Linguagem
A linguagem utilizada é o C++. Algumas características que indicam que o código é em C++:

O uso de `#include <iostream>`, que é a biblioteca padrão para entrada e saída no C++.
O uso de `vector<string>`, que é uma estrutura dinâmica de dados (um vetor que pode crescer ou encolher) disponível no C++.
O uso de `cin` e `cout` para entrada e saída de dados no console.
O C++ é uma linguagem de programação que permite manipulação de memória e dados de baixo nível, mas também oferece recursos de abstração, como a programação orientada a objetos, que está sendo usada nesse código com a definição da classe `GerenciadorTarefas`.

## Funcionalidade:
O **objetivo** do código é criar um gerenciador simples de tarefas no qual o usuário pode:

- Adicionar tarefas que são armazenadas em uma lista.
- Listar todas as tarefas registradas.
- Remover tarefas específicas pelo índice.
- Sair do programa.
- Este tipo de código pode ser útil em sistemas simples de gerenciamento de tarefas, como uma aplicação de lista de afazeres.

## **Muito Obrigado pela sua atenção!**
