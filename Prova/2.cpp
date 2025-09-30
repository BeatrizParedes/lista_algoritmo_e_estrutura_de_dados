/*
Lista Encadeada Simples + Recursividade

Implemente uma lista simplesmente encadeada que armazene números inteiros.

Crie funções para:

a) Inserir elementos no início da lista.

b) Exibir todos os elementos da lista.

c) Uma função recursiva que calcula a soma de todos os elementos.
*/

#include <iostream>
using namespace std;

// Nó da lista
struct No {
    int valor;
    No* prox;
};

// Inserir no início
void inserirInicio(No*& inicio, int v) {
    No* n = new No{v, inicio};
    inicio = n;
}

// Exibir lista
void mostrar(No* n) {
    while (n) {
        cout << n->valor << " ";
        n = n->prox;
    }
    cout << endl;
}

// Soma recursiva dos elementos
int somaRec(No* n) {
    if (!n) return 0;
    return n->valor + somaRec(n->prox);
}

int main() {
    No* lista = nullptr;

    // Inserindo números
    int nums[] = {10, 3, 7, 8, 12};
    for (int v : nums) inserirInicio(lista, v);

    cout << "Lista: ";
    mostrar(lista);

    cout << "Soma dos elementos: " << somaRec(lista) << endl;

    return 0;
}
