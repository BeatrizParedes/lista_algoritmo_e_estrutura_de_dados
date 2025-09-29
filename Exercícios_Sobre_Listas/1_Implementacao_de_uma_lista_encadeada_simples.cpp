/*************************************************

Crie um programa que implemente uma lista encadeada simples com as
seguintes operações:
• Inserir um elemento no início.
• Inserir um elemento no final.
• Remover um elemento específico.
• Exibir todos os elementos da lista.

**************************************************/

#include <iostream>
using namespace std;

struct No {
    int valor;
    No* proximo;
};

// Inserir no início
void inserirInicio(No*& inicio, int valor) {
    No* novoNo = new No{valor, inicio};
    inicio = novoNo;
}

// Inserir no final
void inserirFinal(No*& inicio, int valor) {
    No* novoNo = new No{valor, nullptr};
    if (!inicio) {
        inicio = novoNo;
        return;
    }
    No* aux = inicio;
    while (aux->proximo) aux = aux->proximo;
    aux->proximo = novoNo;
}

// Remover elemento específico
void removerElemento(No*& inicio, int valor) {
    if (!inicio) return;
    if (inicio->valor == valor) {
        No* temp = inicio;
        inicio = inicio->proximo;
        delete temp;
        return;
    }
    No* aux = inicio;
    while (aux->proximo && aux->proximo->valor != valor) aux = aux->proximo;
    if (aux->proximo) {
        No* temp = aux->proximo;
        aux->proximo = aux->proximo->proximo;
        delete temp;
    }
}

// Exibir todos os elementos
void exibirLista(No* inicio) {
    while (inicio) {
        cout << inicio->valor << " ";
        inicio = inicio->proximo;
    }
    cout << endl;
}

int main() {
    No* lista = nullptr;

    inserirInicio(lista, 10);
    inserirInicio(lista, 5);
    inserirFinal(lista, 20);
    exibirLista(lista); // Saída: 5 10 20

    removerElemento(lista, 10);
    exibirLista(lista); // Saída: 5 20

    // Liberar memória
    while (lista) {
        No* temp = lista;
        lista = lista->proximo;
        delete temp;
    }

    return 0;
}
