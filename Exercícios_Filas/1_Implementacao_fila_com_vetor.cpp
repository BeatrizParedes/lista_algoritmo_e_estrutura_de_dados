#include <iostream>
using namespace std;

#define MAX 100

int fila[MAX];
int inicio = 0, fim = -1, tamanho = 0;

void enqueue(int x) {
    if (tamanho < MAX) {
        fim = (fim + 1) % MAX;
        fila[fim] = x;
        tamanho++;
    }
}

void dequeue() {
    if (tamanho > 0) {
        inicio = (inicio + 1) % MAX;
        tamanho--;
    }
}

int front() {
    if (tamanho > 0) return fila[inicio];
    return -1; // fila vazia
}

bool isEmpty() {
    return tamanho == 0;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    cout << "Frente: " << front() << endl; // 10

    dequeue();
    cout << "Frente: " << front() << endl; // 20

    while (!isEmpty()) dequeue();

    cout << "Fila vazia? " << (isEmpty() ? "Sim" : "Nao") << endl;

    return 0;
}
