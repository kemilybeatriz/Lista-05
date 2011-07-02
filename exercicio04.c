/*
4. Ler 12 notas de alunos atrav�s de um procedimento e armazen�-las em um vetor notas.
Admitindo-se que pode haver erros no processo de digita��o, alguns valores armazenados no
vetor podem ser inv�lidos, isto �, fora do intervalo entre 0.0 e 10.0. Fazer uma fun��o para
receber o vetor notas por par�metro e em seguida determinar e apresentar a quantidade de notas
inv�lidas e outra fun��o para apresentar a m�dia das notas v�lidas.
*/

#include <stdio.h>

#define TAM 12

void leNotas(float notas[TAM]);
int calculaInvalidas(float notas[TAM]);
float media(float notas[TAM]);

void main()
{
    int inv;
    float notas[TAM], med;
    leNotas(notas);
    inv = calculaInvalidas(notas);
    printf("\n%d notas invalidas.",inv);
    med = media(notas);
    printf("\nMedia das notas validas: %f", med);

}


void leNotas(float notas[TAM])
{
    int i;
    for(i=0; i<TAM; i++)
    {
        printf("Informe a %do nota do aluno: \n", i+1);
        scanf("%f", &notas[i]);
    }system("cls");
}

int calculaInvalidas(float notas[TAM])
{
    int i, invalidas=0;
    for(i=0; i<TAM; i++)
    {
        if(notas[i]<0 || notas[i]>10)
        invalidas++;
    }
    return invalidas;
}

float media(float notas[TAM])
{
    int i, soma=0, media;
    for(i=0; i<TAM; i++)
    {
        if(notas[i]>=0&&notas[i]<=10)
        {
            soma = notas[i]+soma;
        }
    }

    media = soma/(TAM-calculaInvalidas(notas));
    return media;
}
