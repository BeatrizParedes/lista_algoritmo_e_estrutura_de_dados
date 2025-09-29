/*

Reverter uma Lista Encadeada
Implemente uma função que inverte a ordem dos elementos de uma lista
encadeada sem criar uma nova lista.

*/

#include <iostream>
using namespace std;

struct No {
    int valor;
    No* proximo;
};

// Inserir no final (para criar a lista facilmente)
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

// Exibir todos os elementos
void exibirLista(No* inicio) {
    while (inicio) {
        cout << inicio->valor << " ";
        inicio = inicio->proximo;
    }
    cout << endl;
}

// Reverter a lista
void reverterLista(No*& inicio) {
    No* prev = nullptr;
    No* atual = inicio;
    No* proximo = nullptr;

    while (atual) {
        proximo = atual->proximo;  // salva o próximo nó
        atual->proximo = prev;     // inverte o ponteiro
        prev = atual;              // move prev para o nó atual
        atual = proximo;           // avança para o próximo nó
    }

    inicio = prev;  // atualiza o início da lista
}

int main() {
    No* lista = nullptr;

    // Criando lista: 1 -> 2 -> 3 -> 4
    inserirFinal(lista, 1);
    inserirFinal(lista, 2);
    inserirFinal(lista, 3);
    inserirFinal(lista, 4);

    cout << "Lista original: ";
    exibirLista(lista); // Saída: 1 2 3 4

    reverterLista(lista);

    cout << "Lista invertida: ";
    exibirLista(lista); // Saída: 4 3 2 1

    // Liberar memória
    while (lista) {
        No* temp = lista;
        lista = lista->proximo;
        delete temp;
    }

    return 0;
}
