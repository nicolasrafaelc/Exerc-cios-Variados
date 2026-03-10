#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <iostream>
#include <cstdlib> // Para calloc e free

 using namespace std;
 int main () {

      // Exemplo 1: Alocação dinâmica de um array

      int* array=new int[3];

      // aloca um array de 3 inteiro

      array[0] = 10;
      array[1] = 20;
      array[2] = 30;

      cout<< "valores do array: " << array[0] << ", " << array[1] << ", " << array[2] << endl;

      delete[] array; // Libera a memória do array
      array = NULL;

 }
