/*
4. Ler 12 notas de alunos através de um procedimento e armazená-las em um vetor notas.
Admitindo-se que pode haver erros no processo de digitação, alguns valores armazenados no
vetor podem ser inválidos, isto é, fora do intervalo entre 0.0 e 10.0. Fazer uma função para
receber o vetor notas por parâmetro e em seguida determinar e apresentar a quantidade de notas
inválidas e outra função para apresentar a média das notas válidas.
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
