/*

Inserção Ordenada na Lista Encadeada

Altere a implementação da lista encadeada para que os elementos sejam
inseridos em ordem crescente automaticamente.

*/

#include <iostream>
using namespace std;

struct No {
    int valor;
    No* proximo;
};

// Inserir em ordem crescente
void inserirOrdenado(No*& inicio, int valor) {
    No* novoNo = new No{valor, nullptr};

    // Lista vazia ou valor menor que o primeiro elemento
    if (!inicio || valor < inicio->valor) {
        novoNo->proximo = inicio;
        inicio = novoNo;
        return;
    }

    // Percorrer até encontrar a posição correta
    No* aux = inicio;
    while (aux->proximo && aux->proximo->valor < valor) {
        aux = aux->proximo;
    }

    // Inserir o novo nó
    novoNo->proximo = aux->proximo;
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

// Contar elementos
int contarElementos(No* inicio) {
    int contador = 0;
    while (inicio) {
        contador++;
        inicio = inicio->proximo;
    }
    return contador;
}

int main() {
    No* lista = nullptr;

    // Inserção automática em ordem crescente
    inserirOrdenado(lista, 20);
    inserirOrdenado(lista, 5);
    inserirOrdenado(lista, 15);
    inserirOrdenado(lista, 10);

    exibirLista(lista); // Saída: 5 10 15 20
    cout << "Quantidade de elementos: " << contarElementos(lista) << endl; // Saída: 4

    removerElemento(lista, 15);
    exibirLista(lista); // Saída: 5 10 20
    cout << "Quantidade de elementos: " << contarElementos(lista) << endl; // Saída: 3

    // Liberar memória
    while (lista) {
        No* temp = lista;
        lista = lista->proximo;
        delete temp;
    }

    return 0;
}
