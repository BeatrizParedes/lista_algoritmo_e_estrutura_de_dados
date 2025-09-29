/****************************************
  
Sistema Bancário Simples

Crie uma struct chamada ContaBancaria, contendo:
• Nome do titular (string de até 50 caracteres)
• Número da conta (inteiro)
• Saldo (float)
Crie funções para:
• Depositar um valor na conta
• Sacar um valor da conta (apenas se houver saldo suficiente)
• Exibir o saldo
No main(), crie uma conta bancária e permita que o usuário realize operações.
  
******************************************/

#include <iostream>
#include <string>
using namespace std;

struct ContaBancaria {
    char titular[50];
    int numero;
    float saldo;
};

void depositar(ContaBancaria &conta, float valor) {
    conta.saldo += valor;
    cout << "Depósito realizado! Saldo atual: R$ " << conta.saldo << endl;
}

void sacar(ContaBancaria &conta, float valor) {
    if (valor <= conta.saldo) {
        conta.saldo -= valor;
        cout << "Saque realizado! Saldo atual: R$ " << conta.saldo << endl;
    } else {
        cout << "Saldo insuficiente!\n";
    }
}

void exibirSaldo(const ContaBancaria &conta) {
    cout << "Saldo atual de " << conta.titular << ": R$ " << conta.saldo << endl;
}

int main() {
    ContaBancaria conta;

    cout << "=== Criação da Conta Bancária ===\n";
    cout << "Nome do titular: ";
    cin.getline(conta.titular, 50);
    cout << "Número da conta: ";
    cin >> conta.numero;
    conta.saldo = 0.0;

    int opcao;
    do {
        cout << "\n=== Menu Bancário ===\n";
        cout << "1 - Depositar\n";
        cout << "2 - Sacar\n";
        cout << "3 - Exibir saldo\n";
        cout << "0 - Sair\n";
        cout << "Escolha: ";
        cin >> opcao;

        if (opcao == 1) {
            float valor;
            cout << "Valor para depósito: ";
            cin >> valor;
            depositar(conta, valor);
        } else if (opcao == 2) {
            float valor;
            cout << "Valor para saque: ";
            cin >> valor;
            sacar(conta, valor);
        } else if (opcao == 3) {
            exibirSaldo(conta);
        }

    } while (opcao != 0);
    system("pause");
    return 0;
}
