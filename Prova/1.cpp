/*
Questão 1 – Estruturas Dinâmicas (Lista Encadeada + Recursividade)

Implemente uma lista simplesmente encadeada que armazene números inteiros. O programa deve conter:

a) Uma função para inserir elementos no final da lista.
b) Uma função recursiva que percorra a lista e conte quantos elementos pares ela possui.
c) Uma função que remove todos os elementos ímpares da lista.

Teste seu programa inserindo os números: 10, 3, 7, 8, 12, 15, 20.

Mostre a lista original.

Mostrar a quantidade de pares (função recursiva).

Mostre uma lista após a remoção dos ímpares.
*/

#include <iostream>
using namespace std;

struct No {
    int valor;
    No* prox;
};

// Inserir no final
void inserir(No*& inicio, int v) {
    No* n = new No{v, nullptr};
    if (!inicio) inicio = n;
    else {
        No* aux = inicio;
        while (aux->prox) aux = aux->prox;
        aux->prox = n;
    }
}

// Contar pares recursivamente
int contarPares(No* n) {
    if (!n) return 0;
    return (n->valor % 2 == 0) + contarPares(n->prox);
}

// Remover ímpares
void removerImpares(No*& inicio) {
    while (inicio && inicio->valor % 2 != 0) inicio = inicio->prox;
    No* aux = inicio;
    while (aux && aux->prox) {
        if (aux->prox->valor % 2 != 0) aux->prox = aux->prox->prox;
        else aux = aux->prox;
    }
}

// Mostrar lista
void mostrar(No* n) {
    while (n) { cout << n->valor << " "; n = n->prox; }
    cout << endl;
}

int main() {
    No* lista = nullptr;
    int nums[] = {10,3,7,8,12,15,20};
    for (int v : nums) inserir(lista, v);

    cout << "Lista original: "; mostrar(lista);
    cout << "Pares: " << contarPares(lista) << endl;

    removerImpares(lista);
    cout << "Lista apos remover impares: "; mostrar(lista);

    return 0;
}
