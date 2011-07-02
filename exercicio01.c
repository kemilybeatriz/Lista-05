/*
1. Ler um vetor A com 6 elementos e então construir um vetor B de mesma dimensão de forma
que cada elemento de B seja o fatorial do elemento da posição correspondente em A. Ao final,
exibir os dois vetores. Faça sem o uso de funções ou procedimentos.
*/
#include <stdio.h>

#define TAM 3

void main()
{
    int a[TAM], b[TAM], i, j;

    printf("FATORIAL\n");
    for(i=0; i<TAM; i++)
    {
        do{printf("Informe o %do valor: \n", i+1);
        fflush(stdin);
        scanf("%d", &a[i]);
        if(a[i]<0)
        {
            printf("Nao existe fatorial de numero negativo.\n");
        }
        }while(a[i]<0);
    }

    for(i=0; i<TAM; i++)
    {
        b[i]=1;
        for(j=a[i]; j>1; j--)
        {
            b[i]=j*b[i];
        }

    printf("O fatorial de %d e %d.\n", a[i], b[i]);
    }


}
