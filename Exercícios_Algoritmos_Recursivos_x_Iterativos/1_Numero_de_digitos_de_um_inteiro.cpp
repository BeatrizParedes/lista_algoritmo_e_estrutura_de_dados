/***********************************
 Número de Dígitos de um Inteiro

Implemente uma função recursiva que recebe um número inteiro n e retorna a
quantidade de dígitos que ele possui.
Exemplo:
• contar_digitos(12345) → 5
• contar_digitos(7) → 1

*************************************/

#include <iostream>
using namespace std;

int contar_digitos(int n) {
    if (n < 10 && n > -10) 
        return 1;
    return 1 + contar_digitos(n / 10);
}

int main() {
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    cout << "Quantidade de dígitos: " << contar_digitos(numero) << endl;
    
    system("pause");
    return 0;
}
