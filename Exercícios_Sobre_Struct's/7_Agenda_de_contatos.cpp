/**************************************
 
Agenda de Contatos

Crie uma agenda telefônica usando structs, onde cada contato possui:
• Nome (string de até 50 caracteres)
• Telefone (string de até 15 caracteres)
O programa deve permitir adicionar contatos e buscar um contato pelo nome.
 
***************************************/


#include <iostream>
#include <string>
using namespace std;

struct Contato {
    char nome[50];
    char telefone[15];
};

int main() {
    const int MAX = 100; 
    Contato agenda[MAX];
    int qtd = 0;  

    int opcao;
    do {
        cout << "\n=== Agenda de Contatos ===\n";
        cout << "1 - Adicionar contato\n";
        cout << "2 - Buscar contato\n";
        cout << "0 - Sair\n";
        cout << "Escolha: ";
        cin >> opcao;

        if (opcao == 1) {
            if (qtd < MAX) {
                cout << "Nome: ";
                cin >> agenda[qtd].nome;
                cout << "Telefone: ";
                cin >> agenda[qtd].telefone;
                qtd++;
                cout << "Contato adicionado!\n";
            }
        } else if (opcao == 2) {
            char busca[50];
            cout << "Digite o nome para buscar: ";
            cin >> busca;

            bool encontrado = false;
            for (int i = 0; i < qtd; i++) {
                if (string(agenda[i].nome) == string(busca)) {
                    cout << "Nome: " << agenda[i].nome << endl;
                    cout << "Telefone: " << agenda[i].telefone << endl;
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado) {
                cout << "Contato não encontrado!\n";
            }
        }

    } while (opcao != 0);
    
    system("pause");
    return 0;
}
