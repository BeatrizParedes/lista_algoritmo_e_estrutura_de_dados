/*************************************************

Transformar Produto de Dois Números em Iterativo

Pegue a função do exercício 4 e implemente uma versão iterativa que calcula
o produto usando apenas somas sucessivas.

***************************************************/

#include <iostream>
using namespace std;

int produto_iterativo(int a, int b) {
    int resultado = 0;
    int vezes = abs(b); // trabalha com valor absoluto de b

    for (int i = 0; i < vezes; i++) {
        resultado += a;  // soma 'a' repetidamente
    }

    // se b for negativo, inverte o sinal do resultado
    if (b < 0)
        resultado = -resultado;

    return resultado;
}

int main() {
    int x, y;
    cout << "Digite o primeiro número: ";
    cin >> x;
    cout << "Digite o segundo número: ";
    cin >> y;

    cout << x << " * " << y << " = " << produto_iterativo(x, y) << endl;

    return 0;
}
/*
Como funciona:

Inicializa resultado = 0.

Usa abs(b) para lidar com números negativos.

Soma a repetidamente b vezes usando um for loop.

Se b for negativo, inverte o sinal do resultado no final.
*/