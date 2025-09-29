/***************************************
Structs e Funções

Crie uma struct chamada Produto, que contém:
• Nome do produto (string de até 30 caracteres)
• Código (inteiro)
• Preço (float)
Crie uma função que recebe um Produto como parâmetro e exibe seus dados
formatados. No main(), instancie um produto, peça ao usuário que insira seus
valores e chame a função para exibir os dados.

 **************************************/

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
