#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite um numero decimal: ";
    cin >> n;

    int pilha[100], topo = -1;

    // divide por 2 e empilha os restos
    while (n > 0) {
        pilha[++topo] = n % 2; 
        n /= 2;
    }

    // desempilha para mostrar em ordem inversa (binário)
    cout << "Binario: ";
    while (topo >= 0) {
        cout << pilha[topo--];
    }
    cout << endl;

    return 0;
}
