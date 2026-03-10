#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <iostream>
int main(){

    setlocale(LC_ALL, "");
    int *ptr = (int *) calloc(1, sizeof(int));

    if (!ptr){
        std::cout << "Falha na alocação de memória!" << std::endl; //printf esquisito
        return 1;
    }
    std::cout << "Valor inicial armazenado: " << *ptr << std::endl;

    *ptr = 42;

    std::cout << "Novo valor armazenado: " << *ptr << std::endl;

    free(ptr);
    return 0;
}
