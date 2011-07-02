/*
3. Ler 2 vetores vet1 e vet2 de inteiros com 7 elementos cada. Utilizando um procedimento, criar
um vetor vet3 com 14 posições que seja a junção dos vetores vet1 e vet2. Em seguida, exibir o
vetor vet3.
*/

#include <stdio.h>

#define TAM_1 7
#define TAM_2 14

void leVetores(int vet1[TAM_1], int vet2[TAM_1]);
void juntaVet1Vet2(int vet1[TAM_1], int vet2[TAM_1], int vet3[TAM_2]);
void exibeVet3(int vet3[TAM_2]);

void main()
{
    int vet1[TAM_1], vet2[TAM_1], vet3[TAM_2];
    leVetores(vet1, vet2);
    juntaVet1Vet2(vet1, vet2, vet3);

    printf("VET3\n");
    exibeVet3(vet3);

}

void leVetores(int vet1[TAM_1], int vet2[TAM_1])
{
    int i;
    for(i=0; i<TAM_1; i++)
    {
        printf("Informe o %do valor do vetor 1: \n", i+1);
        scanf("%d", &vet1[i]);
    }system("cls");
    for(i=0; i<TAM_1; i++)
    {
        printf("Informe o %do valor do vetor 2: \n", i+1);
        scanf("%d", &vet2[i]);
    }system("cls");
}

void juntaVet1Vet2(int vet1[TAM_1], int vet2[TAM_1], int vet3[TAM_2])
{
    int i, j;
    for(i=0; i<TAM_1; i++)
    {
        vet3[i] = vet1[i];
    }
    for(i=TAM_1, j=0; i<TAM_2 && j<TAM_1; i++, j++)
    {
        vet3[i] = vet2[j];
    }
}

void exibeVet3(int vet3[TAM_2])
{
    int i;
    for(i=0; i<TAM_2; i++)
    {
        printf("\nposicao %d: %d", i, vet3[i]);
    }
}
