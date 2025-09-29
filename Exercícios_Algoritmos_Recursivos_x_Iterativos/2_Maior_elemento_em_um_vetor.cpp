/********************************************
Maior Elemento em um Vetor

Crie uma função recursiva que recebe um vetor de inteiros e seu tamanho n e
retorna o maior valor presente no vetor.
Exemplo:
int maior_elemento(int vet[], int n);

*********************************************/

#include <iostream>
using namespace std;

int maior_elemento(int vet[], int n) {
    if (n == 1)
        return vet[0];

    int maiorRestante = maior_elemento(vet, n - 1);
    if (vet[n - 1] > maiorRestante)
        return vet[n - 1];
    else
        return maiorRestante;
}

int main() {
    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int vet[n];
    cout << "Digite os elementos do vetor:\n";
    for (int i = 0; i < n; i++) {
        cin >> vet[i];
    }

    cout << "O maior elemento é: " << maior_elemento(vet, n) << endl;

    return 0;
}
