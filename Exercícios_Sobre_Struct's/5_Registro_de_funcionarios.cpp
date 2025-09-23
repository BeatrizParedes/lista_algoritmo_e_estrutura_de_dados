#include <iostream>
#include <string>
using namespace std;

struct Funcionario {
    string nome;
    string cargo;
    float salario;
};

int main() {
    int P;

    cout << "Quantos funcionarios deseja cadastrar? ";
    cin >> P;

    Funcionario* funcionarios = new Funcionario[P];

    for (int i = 0; i < P; i++) {
        cout << "\nFuncionario " << i + 1 << " \n";

        cout << "Digite o nome: ";
        cin >> funcionarios[i].nome;

        cout << "Digite o cargo: ";
        cin >> funcionarios[i].cargo;

        cout << "Digite o salario: ";
        cin >> funcionarios[i].salario;
    }

    cout << "\nLista de Funcionarios \n";
    for (int i = 0; i < P; i++) {
        cout << "Funcionario " << i + 1 << ":\n";
        cout << "Nome: " << funcionarios[i].nome << endl;
        cout << "Cargo: " << funcionarios[i].cargo << endl;
        cout << "Salario: R$ " << funcionarios[i].salario << endl;
        cout << "-------------------------\n";
    }
    delete[] funcionarios;

    system("pause");
    return 0;
}
