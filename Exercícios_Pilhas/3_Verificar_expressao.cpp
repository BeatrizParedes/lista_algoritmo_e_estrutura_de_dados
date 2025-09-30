#include <iostream>
#include <string>
using namespace std;

bool verifica(string s) {
    int pilha[100], topo = -1;

    for (char c : s) {
        if (c == '(') {
            pilha[++topo] = c; // empilha
        } 
        else if (c == ')') {
            if (topo == -1) return false; // não tem '(' para fechar
            topo--; // desempilha um '('
        }
    }

    return topo == -1; // se pilha vazia, está balanceado
}

int main() {
    string exp;
    cout << "Digite a expressao: ";
    cin >> exp;

    if (verifica(exp)) 
        cout << "Valido" << endl;
    else 
        cout << "Invalido" << endl;

    return 0;
}
