#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <iostream>
int main()
{
    setlocale(LC_ALL, "");
    char *c;

    c = (char *) malloc (1);

    if (!c){
        printf("Não conseguiu alocar memória!\n");
        exit(1);
    }

    printf("Digite uma letra: ");
    scanf("%c", &*c);

    printf("%c\n", *c);
    free(c);

    return 0;

}
/* MALLOC EXEMPLO 1

    char *c;

    c = (char *) malloc (1);

    if (!c){
        printf("Não conseguiu alocar memória!\n");
        exit(1);
    }

    *c = 'd';
    printf("%c\n", *c);
    free(c);

    return 0; */
