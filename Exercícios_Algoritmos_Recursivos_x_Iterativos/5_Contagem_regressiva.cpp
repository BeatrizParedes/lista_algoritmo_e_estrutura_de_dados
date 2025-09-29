/***************************************************

Contagem Regressiva

Crie uma função recursiva que recebe um número n e imprime uma contagem
regressiva até 0.
Exemplo: contagem_regressiva(5) → 5, 4, 3, 2, 1, 0.

****************************************************/

#include <iostream>
using namespace std;

void contagem_regressiva(int n) {
    if (n < 0)  // caso base: quando n é menor que 0, para a recursão
        return;

    cout << n << " ";
    contagem_regressiva(n - 1);  // chama a função com n-1
}

int main() {
    int numero;
    cout << "Digite um número para a contagem regressiva: ";
    cin >> numero;

    contagem_regressiva(numero);
    cout << endl;

    return 0;
}
