/*Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/

#include <stdio.h>

main()
{

    int numeroP;
    int count = 0;

    printf("Digite um numero positivo:\n", numeroP);
    for (int i = 1; i < numeroP; i++)
    {
        if (numeroP % i == 0)
        {
            count++;
        }
    }
    printf("o numero de divisores é %d", count);
}