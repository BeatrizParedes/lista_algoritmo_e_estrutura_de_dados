#include <iostream>
#include <string>
using namespace std;

struct Produto {
    string nome;  
    int codigo;    
    float preco;  
};

void exibir_produto(const Produto &p) {
    cout << "\nDados do Produto \n";
    cout << "Nome: " << p.nome << endl;
    cout << "Código: " << p.codigo << endl;
    cout << "Preço: R$ " << p.preco << endl;
}

int main() {
    Produto prod;

    cout << "Digite o nome do produto: ";
    cin >> prod.nome;

    cout << "Digite o código do produto: ";
    cin >> prod.codigo;

    cout << "Digite o preço do produto: ";
    cin >> prod.preco;
    
    exibir_produto(prod);

    system("pause");
    return 0;
}
