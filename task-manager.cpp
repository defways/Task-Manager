#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Classe para gerenciar tarefas
class GerenciadorTarefas {
private:
    vector<string> tarefas; // Vetor para armazenar as tarefas

public:
    // Método para adicionar uma nova tarefa
    void adicionarTarefa(const string& tarefa) {
        tarefas.push_back(tarefa);
        cout << "Tarefa adicionada com sucesso!" << endl;
    }

    // Método para listar todas as tarefas cadastradas
    void listarTarefas() {
        if (tarefas.empty()) {
            cout << "Nenhuma tarefa encontrada." << endl;
        } else {
            cout << "Lista de tarefas:" << endl;
            for (size_t i = 0; i < tarefas.size(); ++i) {
                cout << i + 1 << ". " << tarefas[i] << endl;
            }
        }
    }

    // Método para remover uma tarefa pelo índice informado
    void removerTarefa(int indice) {
        if (indice > 0 && indice <= static_cast<int>(tarefas.size())) {
            tarefas.erase(tarefas.begin() + (indice - 1));
            cout << "Tarefa removida com sucesso!" << endl;
        } else {
            cout << "Índice inválido." << endl;
        }
    }
};

int main() {
    GerenciadorTarefas gerenciador; // Instância da classe GerenciadorTarefas
    int opcao; // Variável para armazenar a opção do usuário
    string tarefa; // Variável para armazenar a nova tarefa
    int indice; // Variável para armazenar o índice da tarefa a ser removida

    // Loop para exibir o menu de opções
    do {
        cout << "\nGerenciador de Tarefas" << endl;
        cout << "1. Adicionar Tarefa" << endl;
        cout << "2. Listar Tarefas" << endl;
        cout << "3. Remover Tarefa" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore(); // Ignorar o caractere de nova linha deixado pelo cin

        switch (opcao) {
            case 1:
                cout << "Digite a tarefa: ";
                getline(cin, tarefa); // Captura a linha inteira digitada pelo usuário
                gerenciador.adicionarTarefa(tarefa);
                break;
            case 2:
                gerenciador.listarTarefas(); // Chama o método para listar as tarefas
                break;
            case 3:
                cout << "Digite o número da tarefa a remover: ";
                cin >> indice;
                gerenciador.removerTarefa(indice); // Chama o método para remover a tarefa
                break;
            case 4:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opção inválida!" << endl;
        }
    } while (opcao != 4); // Continua o loop até que o usuário escolha sair

    return 0;
}