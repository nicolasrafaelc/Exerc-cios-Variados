#include <iostream>
#define TAM 5 //tamanho max da fila

using namespace std;
struct fila{
    int dados[TAM];
    int inicio;
    int fim;
    int total;
};

void inicializar(fila &f){
    f.inicio = 0;
    f.fim = 0;
    f.total = 0;
}

bool estavazia(fila f){
    return f.total == 0;
}

bool estacheia(fila f){
    return f.total == TAM;
}

void enfileirar(fila &f, int valor){
    if(!estacheia(f)){
        f.dados[f.fim] = valor;
        f.fim = (f.fim + 1) % TAM;
        f.total++;

        cout << "Elemento " << valor << "Enfileirado com sucesso! \n";
    }else{
        cout << "A fila está cheia! Não é possível enfileirar. \n";
    }
}

void mostrarfila(fila f){
    if(estavazia(f)){
        cout << "Fila vazia!\n";
        return;
    }
    cout << "Fila";

    int i = f.inicio;

    for(int cont = 0; cont < f.total; cont++);

    cout << f.dados[i] << " ";
    i = (i + 1) % TAM;
    cout << endl;
}

int main(){
    fila fila1;
    inicializar (fila1);

    int opcao, valor;
    do{
        cout << "\n-- Menu Fila --\n";
        cout << "1. Enfileirar \n";
        cout << "2. Retirar da fila\n";
        cout << "3. Mostrar a fila\n";
        cout << "0. SAIR\n";
        cout << "Escolha: ";
        cin >> opcao;

        switch(opcao) {
        }case 1: cout << "Digite um valor para enfileirar: ";
                cin >> valor;
                enfileirar(fila1, valor);
                break;

        case 2:
        break;

        case 3:
        mostrarfila(fila);
        break;

        case 0: cout << "Encerrando o programa...\n";
        break;

        default: cout << "Opção inválida. Tente novamente"
    }while (opcao ! = 0);

}

























/*class Pilha{
private:
        int dados[MAX];
        int topo;
public:
// inicializa o topo com -1(pilha vazia)
    Pilha(){
    topo = -1;
    }
    //verificar se a pilha esta vazia
    bool estaVazia(){
    return topo == -1;
    }
    bool estaCheia(){
    return topo == MAX - 1;
    }
    void empilhar(int valor ){
    if(estaCheia()){
        cout <<"pilha cheia \n";
        return;
    }
    dados[++topo] = valor;
    //incrementa o topo e armazena o valor
cout <<"Elemento " << valor << "inserido na pilha \n";
     }
    // remove o elemento o topo da pilha.
     void desempilhar(){
     if (estaVazia()){
    cout << "Pilha vazia!\n";
     return;
      }
cout <<"Elemento " << dados[topo--]
<< "remover da pilha \n";
     }
//mostra todos os elemntos da pilha
    void mostrar(){
    if (estaVazia()){
     cout << "Pilha vazia!\n";
     return;
    }
     cout << "Conteúdo da pilha:\n";
    for (int i = topo; i >= 0; i--) {
cout << dados[i] << endl;
    }
    }
};
// Função principal com menu
// de operações
int main() {
Pilha p;  // cria um objeto da classe
int opcao;  // Armazena a opção do menu
int valor;// Armazena o valor a ser empilhado
do {
    cout <<"\n1. Empilhar \n2. Desempilhar \n3. Mostrar pilha\n0. Sair\nEscolha: ";
    cin >> opcao;
switch(opcao)
            {
    case 1:
     cout << "Digite o valor: ";
      cin >> valor;
      p.empilhar(valor);
      break;
    case 2:
        p.desempilhar();
        break;
    case 3:
        p.mostrar();
      break;
    case 0:
   cout << "Saindo...\n";
    break;
    default:
    cout << "Opção inválida!\n";
}
} while (opcao != 0 );
return 0;
}*/
