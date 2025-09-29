/*****************************************************

Soma dos Dígitos de um Número

Implemente uma função recursiva que recebe um número inteiro n e retorna a
soma de seus dígitos.
Exemplo: soma_digitos(1234) → 1 + 2 + 3 + 4 = 10.

******************************************************/

#include <iostream>
using namespace std;

int soma_digitos(int n) {
    // Se o número for negativo, transforma em positivo
    if (n < 0) n = -n;

    // Caso base: se o número tem apenas 1 dígito, retorna ele mesmo
    if (n < 10)
        return n;

    // Passo recursivo: soma o último dígito com a soma dos demais
    return (n % 10) + soma_digitos(n / 10);
}

int main() {
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    cout << "A soma dos dígitos de " << numero << " é: " 
         << soma_digitos(numero) << endl;

    return 0;
}
