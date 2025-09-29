/*************************************************
 
Vetor de Structs

Crie um vetor de 5 elementos da struct Aluno, que contém:
• Nome (string de até 50 caracteres)
• Matrícula (inteiro)
• Nota (float)
Solicite ao usuário que insira os dados dos 5 alunos e depois exiba a média das
notas.

**************************************************/

#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string nome;     
    int matricula;  
    float nota;     
};

int main() {
    Aluno alunos[5];   
    float somaNotas = 0;

    for (int i = 0; i < 5; i++) {
        cout << "\nAluno " << i + 1 << "\n";

        cout << "Digite o nome: ";
        cin >> alunos[i].nome;

        cout << "Digite a matrícula: ";
        cin >> alunos[i].matricula;

        cout << "Digite a nota: ";
        cin >> alunos[i].nota;

        somaNotas += alunos[i].nota;
    }
    
    float media = somaNotas / 5.0;

    cout << "\nResultado\n";
    for (int i = 0; i < 5; i++) {
        cout << "Aluno: " << alunos[i].nome
             << "Matrícula: " << alunos[i].matricula
             << "Nota: " << alunos[i].nota << endl;
    }
    cout << "\nMédia das notas: " << media << endl;

    system("pause");
    return 0;
}
