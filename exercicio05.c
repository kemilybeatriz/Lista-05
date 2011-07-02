/*
5. Seja V um vetor para armazenar 10 números reais. Escreva um programa para ler os 10
elementos de V e determinar o maior valor da diferença entre cada elemento V[i] e o elemento
V[i-1], isto é, o maior valor dentre as seguintes diferenças::
V[1] - V[0]
V[2] - V[1]
V[3] - V[2]
...
V[8] - V[7]
V[9] – V[8]
*/

#include <stdio.h>

#define TAM 10

void main()
{
    int i;
    float v[TAM], maior, dif[TAM];

    for(i=0; i<TAM; i++)
    {
        printf("Informe o %do valor: \n", i+1);
        scanf("%f", &v[i]);
    }

    maior = v[1]-v[0];
    for(i=2; i<TAM; i++);
    {
        if( maior<(dif[i]-dif[i-1]) )
            maior = v[i] - v[i-1];
    }
    printf("O maior valor da diferenca eh: %f", maior);
}
