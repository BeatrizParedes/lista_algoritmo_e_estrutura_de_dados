/*******************************************
 
Cadastro de Livros

Crie uma struct chamada Livro, que contenha:
• Título (string de até 50 caracteres)
• Autor (string de até 50 caracteres)
• Ano de publicação (inteiro)
Crie uma função que recebe um vetor de Livro e exibe os livros publicados após
um determinado ano (definido pelo usuário).
 
*******************************************/

#include <iostream>
#include <string>
using namespace std;

struct Livro {
    char titulo[50];
    char autor[50];
    int ano;
};

void exibirLivrosAposAno(Livro livros[], int tamanho, int anoFiltro) {
    cout << "\nLivros publicados após " << anoFiltro << ":\n";
    for (int i = 0; i < tamanho; i++) {
        if (livros[i].ano > anoFiltro) {
            cout << "Título: " << livros[i].titulo << endl;
            cout << "Autor: " << livros[i].autor << endl;
            cout << "Ano: " << livros[i].ano << endl;
            cout << "----------------------\n";
        }
    }
}

int main() {
    int n;
    cout << "Quantos livros deseja cadastrar? ";
    cin >> n;

    Livro livros[n];

    for (int i = 0; i < n; i++) {
        cout << "\nCadastro do livro " << i + 1 << endl;
        cout << "Título: ";
        cin >> livros[i].titulo;
        cout << "Autor: ";
        cin >> livros[i].autor;
        cout << "Ano de publicação: ";
        cin >> livros[i].ano;
    }


    int anoFiltro;
    cout << "\nDigite um ano para filtrar os livros: ";
    cin >> anoFiltro;

    exibirLivrosAposAno(livros, n, anoFiltro);

    system("pause");
    return 0;
}
