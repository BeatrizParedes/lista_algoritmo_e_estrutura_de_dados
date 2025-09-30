#include <iostream>
#include <string>
using namespace std;

#define MAX 100

char pilha[MAX];
int topo = -1;

void push(char c) {
    if (topo < MAX - 1) pilha[++topo] = c;
}

char pop() {
    if (topo >= 0) return pilha[topo--];
    return '\0'; // caso a pilha esteja vazia
}

int main() {
    string s;
    cout << "Digite uma string: ";
    cin >> s;

    // Coloca cada caractere na pilha
    for (char c : s) push(c);

    // Retira da pilha (invertido) e imprime
    cout << "String invertida: ";
    while (topo >= 0) cout << pop();
    cout << endl;

    return 0;
}
