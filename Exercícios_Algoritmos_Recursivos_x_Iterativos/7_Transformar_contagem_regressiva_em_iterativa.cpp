/*******************************************

Transformar Contagem Regressiva em Iterativa

Pegue a função recursiva do exercício 5 e implemente uma versão iterativa
usando for ou while.

*******************************************/

#include <iostream>
using namespace std;

void contagem_regressiva_iterativa(int n) {
    for (int i = n; i >= 0; i--) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int numero;
    cout << "Digite um número para a contagem regressiva: ";
    cin >> numero;

    contagem_regressiva_iterativa(numero);

    return 0;
}

/*
Como funciona:

O for começa em i = n e vai diminuindo até 0 (i--).

A cada iteração, imprime o valor de i.

Ao final, imprime um endl para quebrar a linha.

*/