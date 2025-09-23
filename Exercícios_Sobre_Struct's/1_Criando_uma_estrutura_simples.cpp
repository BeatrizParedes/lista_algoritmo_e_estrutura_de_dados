#include <iostream>
#include <string>
using namespace std;

struct Pessoa {
    string nome;   
    int idade;   
    float altura;  
};

int main() {
    Pessoa p;
    cout << "Digite o nome: ";
    cin >> p.nome;

    cout << "Digite a idade: ";
    cin >> p.idade;

    cout << "Digite a altura: ";
    cin >> p.altura;

    cout << "\n Dados da Pessoa \n";
    cout << "Nome: " << p.nome << endl;
    cout << "Idade: " << p.idade << endl;
    cout << "Altura: " << p.altura << endl;

    system("pause");
    return 0;
}
