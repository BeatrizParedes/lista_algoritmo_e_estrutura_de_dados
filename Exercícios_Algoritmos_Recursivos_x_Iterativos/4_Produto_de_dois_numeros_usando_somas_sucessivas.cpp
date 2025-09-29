/****************************************************

Produto de Dois Números Usando Somas Sucessivas

Implemente uma função recursiva que calcula o produto de dois números
inteiros a e b apenas usando somas sucessivas (sem usar *).
Exemplo:
• produto(5, 3) → 5 + 5 + 5 = 15
• produto(7, 2) → 7 + 7 = 14

*****************************************************/

#include <iostream>
using namespace std;

int produto(int a, int b) {
    // Se b for 0, o resultado é 0
    if (b == 0) 
        return 0;

    // Se b for negativo, inverte os sinais
    if (b < 0)
        return -produto(a, -b);

    // Passo recursivo: soma 'a' b vezes
    return a + produto(a, b - 1);
}

int main() {
    int x, y;
    cout << "Digite o primeiro número: ";
    cin >> x;
    cout << "Digite o segundo número: ";
    cin >> y;

    cout << x << " * " << y << " = " << produto(x, y) << endl;

    return 0;
}
