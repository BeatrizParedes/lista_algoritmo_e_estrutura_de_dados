/****************************************

Transformar Maior Elemento em Iterativo

Pegue a função recursiva do exercício 2 e implemente uma versão iterativa
para encontrar o maior elemento do vetor.

****************************************/

#include <iostream>
using namespace std;

int maior_elemento_iterativo(int vet[], int n) {
    int maior = vet[0];  // começa assumindo que o primeiro é o maior
    for (int i = 1; i < n; i++) {
        if (vet[i] > maior) {
            maior = vet[i];  // atualiza o maior se encontrar um maior
        }
    }
    return maior;
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

    cout << "O maior elemento é: " << maior_elemento_iterativo(vet, n) << endl;

    return 0;
}

/*
Como funciona:

Inicializa maior com o primeiro elemento do vetor.

Percorre o vetor do segundo elemento até o último.

Se encontrar um elemento maior que maior, atualiza maior.

Ao final do loop, retorna o maior valor encontrado.
*/