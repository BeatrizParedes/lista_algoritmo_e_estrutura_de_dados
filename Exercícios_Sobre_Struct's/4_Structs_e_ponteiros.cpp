#include <iostream>
#include <string>
using namespace std;

struct Carro {
    string modelo;
    int ano;
    float preco;
};

int main() {
    Carro* carro = new Carro;

    cout << "Digite o modelo do carro: ";
    cin >> carro->modelo;

    cout << "Digite o ano: ";
    cin >> carro->ano;

    cout << "Digite o preco: ";
    cin >> carro->preco;

    cout << "\nDados do Carro \n";
    cout << "Modelo: " << carro->modelo << endl;
    cout << "Ano: " << carro->ano << endl;
    cout << "Preco: R$ " << carro->preco << endl;

    delete carro;

    system("pause");
    return 0;
}
