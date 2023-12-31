/*Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero, e,
 a partir do segundo termo,
 seu valor é dado pela soma dos dois termos anteriores. Alguns termos dessa sequência são:  0, 1, 1, 2, 3, 5, 8, 13, 21, 34. */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numeros;
    int seq = 1, seqA = 0, seqAux; /* posição até a qual será lida  variaveis para armazenar o numero atual e anterior da sequência, e uma auxiliar para trocar esses valores*/

    printf("Quantos termos da sequencia de Fibonacci deseja ver? ");
    scanf("%d", &numeros);

    printf("\n0 ");
    numeros--;

    while (numeros)
    {
        printf("%d ", seq);
        seqAux = seq;
        seq += seqA;
        seqA = seqAux;
        numeros--;
    }

    printf("\n\n");

    return 0;
}