#include <iostream>
using namespace std;

#define MAX 100

int pilha[MAX], topo = -1; //topo é o índice do último elemento colocado na lista e -1 significa que a lista está vazia

void push(int x) { 
    if (topo < MAX - 1) pilha[++topo] = x; 
}

void pop() { 
    if (topo >= 0) topo--; 
}

int top() { 
    return (topo >= 0) ? pilha[topo] : -1; 
}

bool isEmpty() { 
    return topo == -1; 
}

int main() {
    push(10);
    push(20);
    push(30);

    cout << "Topo: " << top() << endl; // 30
    pop();
    cout << "Topo: " << top() << endl; // 20

    while (!isEmpty()) pop();
    cout << "Pilha vazia? " << (isEmpty() ? "Sim" : "Nao") << endl;

    return 0;
}
