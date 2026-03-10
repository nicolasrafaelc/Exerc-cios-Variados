#include <iostream>
#include <string>
using namespace std;

struct Funcionario {
    string nome;
    int idade;
    float salario;
};

int main() {
    Funcionario funcionarios[5];

    int menorIdade = 9999;
    int indiceMenorIdade = 0;

    float maiorSalario = -1.0;
    int indiceMaiorSalario = 0;

    int somaIdade = 0;
    float somaSalario = 0.0;

    for (int i = 0; i < 5; i++) {
        cout << "Funcionario " << i + 1 << endl;
        cout << "Nome: ";
        cin >> funcionarios[i].nome;
        cout << "Idade: ";
        cin >> funcionarios[i].idade;
        cout << "Salario: ";
        cin >> funcionarios[i].salario;
        cout << "--------------------------" << endl;

        if (funcionarios[i].idade < menorIdade) {
            menorIdade = funcionarios[i].idade;
            indiceMenorIdade = i;
        }

        if (funcionarios[i].salario > maiorSalario) {
            maiorSalario = funcionarios[i].salario;
            indiceMaiorSalario = i;
        }

        somaIdade += funcionarios[i].idade;
        somaSalario += funcionarios[i].salario;
    }


    cout << "\n--- Funcionario com MENOR idade ---" << endl;
    cout << "Nome: " << funcionarios[indiceMenorIdade].nome << endl;
    cout << "Idade: " << funcionarios[indiceMenorIdade].idade << endl;
    cout << "Salario: " << funcionarios[indiceMenorIdade].salario << endl;

    cout << "\n--- Funcionario com MAIOR salario ---" << endl;
    cout << "Nome: " << funcionarios[indiceMaiorSalario].nome << endl;
    cout << "Idade: " << funcionarios[indiceMaiorSalario].idade << endl;
    cout << "Salario: " << funcionarios[indiceMaiorSalario].salario << endl;

    cout << "\n--- Funcionarios com nome com menos de 6 caracteres ---" << endl;
    for (int i = 0; i < 5; i++) {
        if (funcionarios[i].nome.length() < 6) {
            cout << funcionarios[i].nome << endl;
        }
    }

    cout << "\nMedia de idade dos funcionarios: " << (float)somaIdade / 5 << endl;
    cout << "Media salarial dos funcionarios: " << somaSalario / 5 << endl;

    return 0;
}
