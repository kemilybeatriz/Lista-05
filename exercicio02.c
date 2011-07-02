/*
2. Ler 2 vetores A e B de números reais com 10 elementos cada. Construir um procedimento que
recebe o vetor A, o vetor B e um terceiro vetor que será a subtração do elemento correspondente
de A por B (desde que o elemento em A seja maior que aquele em B; caso contrário, inserir 0 na
posição atual de C).Criar outro procedimento para exibir o vetor C.
*/

#include <stdio.h>

#define TAM 3

void subtraiAB(float a[TAM], float b[TAM], float c[TAM]);
void exibeC(float a[TAM], float b[TAM], float c[TAM]);

void main()
{
    int i;
    float a[TAM], b[TAM], c[TAM];
    for(i=0; i<TAM; i++)
    {
        printf("Informe o %do valor da matriz A: \n", i+1);
        scanf("%f", &a[i]);
    }system("cls");
    for(i=0; i<TAM; i++)
    {
        printf("Informe o %do valor da matriz B: \n", i+1);
        scanf("%f", &b[i]);
    }system("cls");

    subtraiAB(a, b, c);
    exibeC(a, b, c);
}

void subtraiAB(float a[TAM], float b[TAM], float c[TAM])
{
    int i;
    for(i=0; i<TAM; i++)
    {
        if(a[i]>b[i])
        {
            c[i] = a[i]-b[i];
        }else{
            c[i] = 0;
        }
    }
}

void exibeC(float a[TAM], float b[TAM], float c[TAM])
{
    int i;
    for(i=0; i<TAM; i++)
    {
        printf("A subtracao entre %f e %f: \n%f",a[i], b[i], c[i]);
    }

}
