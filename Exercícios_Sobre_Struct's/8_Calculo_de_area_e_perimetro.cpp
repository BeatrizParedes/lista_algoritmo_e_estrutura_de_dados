/*****************************************
  
Cálculo de Área e Perímetro

Crie uma struct chamada Retangulo, que contém:
• Base (float)
• Altura (float)
Crie funções para calcular a área e o perímetro do retângulo. No main(), permita
que o usuário insira os valores e exiba os cálculos.
  
 *****************************************/



#include <iostream>
using namespace std;

struct Retangulo {
    float base;
    float altura;
};

float calcularArea(Retangulo l) {
    return l.base * l.altura;
}

float calcularPerimetro(Retangulo l) {
    return 2 * (l.base + l.altura);
}

int main() {
    Retangulo l;

    cout << "Digite a base do retângulo: ";
    cin >> l.base;
    cout << "Digite a altura do retângulo: ";
    cin >>l.altura;

    cout << "\nÁrea: " << calcularArea(l) << endl;
    cout << "Perímetro: " << calcularPerimetro(l) << endl;
    system("pause");
    return 0;
}
