#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#define tam 5
int main()
{
    setlocale(LC_ALL, "");

    for(int i = 0; i < 5 ; i++){
        printf("%d", i);
    }


}




















/*int i;
    char nomes [tam][10];
    float salario [tam], reajuste;

    for(i = 0; i < tam; i++){
        printf("\n Informe o seu nome: ");
        scanf("%s", &nomes[i]);
        printf("\n salário: ");
        scanf("%f", &salario[i]);
    }

    printf("\nInforme o valor do percentual de reajuste: ");
    scanf("%f", &reajuste);
    printf("\n--- REAJUSTE SALARIAL ---\n");

    for(i = 0; i < tam; i++){
        salario[i] += (salario[i] * reajuste / 100);
        printf("\n os funcionários: %s - R$ %.2f é: ", nomes[i], salario[i]);

    }
    int matriz [3][3];
    int somacoluna = 0;
    int produtolinha = 1;
    int somatotal = 0;

    printf("Digite os números da matriz 3x3:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("número [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        somacoluna += matriz[i][0];
    }

    for(int j = 0; j < 3; j++){
        produtolinha += matriz[0][j];
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            somatotal += matriz[i][j];
        }
    }

    printf("O resultado da soma dos números da primeira coluna é: %d\n", somacoluna);
    printf("O produto dos números da primeira linha é: %d\n", produtolinha);
    printf("O resultado da soma geral da matriz é: %d\n", somatotal);


    return 0;*/

























/*int i, j, materia[4] [6];
    for (i = 0; i < 4; i++){
        printf("\n entre com as notas da matéria: %d \n ", i + 1);
    for (j = 0; j < 6; j++){
        printf("entre com a nota do aluno: %d\n", j + 1);
        scanf("%d", &materia[i] [j]);
    }

    }*/

/*4) setlocale(LC_ALL, "");
    float media[8];
    int i;
    int mediatotal = 0;
    for(i = 0; i < 8; i++){
        printf("\n informe a sua nota: ");
        scanf("%d", &media[i]);
    }

    mediatotal = mediatotal / 8;
    printf("\n a média é: %d", mediatotal);



    getche();
    return 0;*/


