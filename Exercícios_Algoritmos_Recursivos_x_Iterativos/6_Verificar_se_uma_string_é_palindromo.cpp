/****************************************************

Verificar se uma String é Palíndromo

Implemente uma função recursiva que recebe uma string e retorna 1 se for um
palíndromo e 0 caso contrário.
Exemplo:
• palindromo("arara") → 1
• palindromo("casa") → 0

*****************************************************/

#include <iostream>
#include <string>
using namespace std;

bool palindromo(string s, int inicio, int fim) {
    // Caso base: se passou do meio, é palíndromo
    if (inicio >= fim)
        return true;

    // Se os caracteres das extremidades forem diferentes, não é palíndromo
    if (s[inicio] != s[fim])
        return false;

    // Chamada recursiva para os próximos caracteres internos
    return palindromo(s, inicio + 1, fim - 1);
}

int main() {
    string texto;
    cout << "Digite uma palavra: ";
    cin >> texto;

    if (palindromo(texto, 0, texto.size() - 1))
        cout << texto << " é palíndromo!\n";
    else
        cout << texto << " não é palíndromo!\n";

    return 0;
}
