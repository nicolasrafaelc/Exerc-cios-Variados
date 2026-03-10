#include <iostream>
using namespace std;

struct aluno{
    string nome;
    int matricula;
    float nota;
};

void mostrarAluno{
    cout << "Nome: " << aluno.nome << endl;
    cout << "Matrícula: " << aluno.matrícula << endl;
    cout << "Nota: " << aluno.nota << endl;
};
int main{
{
 Aluno aluno1;

 cout << "digite o nome do aluno";
 //getline- uma função usada para ler
 //uma linha inteira de texto
 //(incluindo espaços) da entrada
 // padrão (cin).}

void lerNome(string &nome) {
    cout << "Digite o nome do aluno: ";
    cout << "Digite a matrícula do aluno: ";
    cin >> aluno.nota;
};

void lerAluno(aluno, &aluno){
    cout << "Digite a nome do al"
    cin
}

/*/#include <iostream>
using namespace std;

// Definindo a struct
struct Aluno {
string nome;
int matricula;
float nota;
 };
 Função para mostrar os dados
// do aluno
void exibirAluno(Aluno a){
cout << "Nome :" <<a.nome <<endl;
cout << "Matrícula: " << a.matricula << endl;
 cout << "Nota: " << a.nota << endl;
}
int main() {
 // criando um aluno
 Aluno aluno1;
 // receber os dadps do usuario
 cout << "digite o nome do aluno";
 //getline- uma função usada para ler
 //uma linha inteira de texto
 //(incluindo espaços) da entrada
 // padrão (cin).
  getline(cin, aluno1.nome);
  cout << "Digite a matricula";
  cin >> aluno1.matricula;
  cout << "Digite a nota: ";
   cin >> aluno1.nota;
  // Exibindo os dados
  cout <<"\n Dados do aluno: \n";
   exibirAluno(aluno1);
  return 0;
}
