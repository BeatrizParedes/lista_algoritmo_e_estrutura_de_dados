/***********************************************
 
Transformar Soma dos Dígitos em Iterativo

Pegue a função do exercício 3 e implemente uma versão iterativa que calcula
a soma dos dígitos.

***********************************************/

#include <iostream>
using namespace std;

int soma_digitos_iterativa(int n) {
    n = abs(n); // garante que o número seja positivo
    int soma = 0;

    while (n > 0) {
        soma += n % 10;  // pega o último dígito e adiciona à soma
        n /= 10;         // remove o último dígito
    }

    return soma;
}

int main() {
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    cout << "A soma dos dígitos de " << numero << " é: " 
         << soma_digitos_iterativa(numero) << endl;

    return 0;
}

/*
Como funciona:

Torna o número positivo (abs(n)), para lidar com números negativos.

Inicializa a variável soma com 0.

Enquanto n > 0:

n % 10 → pega o último dígito e adiciona à soma.

n /= 10 → remove o último dígito do número.

Quando n chega a 0, retorna a soma total dos dígitos.
*/