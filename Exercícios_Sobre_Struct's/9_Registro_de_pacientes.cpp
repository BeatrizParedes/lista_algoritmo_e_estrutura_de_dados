/*************************************************************************************
  
Registro de Pacientes

Crie uma struct chamada Paciente, contendo:
• Nome (string de até 50 caracteres)
• Idade (inteiro)
• Diagnóstico (string de até 100 caracteres)
Crie uma função que recebe um vetor de Paciente e exibe todos os pacientes
acima de 60 anos.
  
 *************************************************************************************/

#include <iostream>
#include <string>
using namespace std;

struct Paciente {
    char nome[50];
    int idade;
    char diagnostico[100];
};

void exibirAcimaDe60(Paciente pacientes[], int qtd) {
    cout << "\nPacientes com mais de 60 anos:\n";
    for (int i = 0; i < qtd; i++) {
        if (pacientes[i].idade > 60) {
            cout << "Nome: " << pacientes[i].nome << endl;
            cout << "Idade: " << pacientes[i].idade << endl;
            cout << "Diagnóstico: " << pacientes[i].diagnostico << endl;
            cout << "-----------------------------\n";
        }
    }
}

int main() {
    int p;
    cout << "Quantos pacientes deseja cadastrar? ";
    cin >> p;

    Paciente pacientes[p];

    for (int i = 0; i < p; i++) {
        cout << "\nCadastro do paciente " << i + 1 << endl;
        cout << "Nome: ";
        cin >> pacientes[i].nome;
        cout << "Idade: ";
        cin >> pacientes[i].idade;
        cout << "Diagnóstico: ";
        cin >> pacientes[i].diagnostico;
    }

    exibirAcimaDe60(pacientes, p);
    system("pause");
    return 0;
}
