/*Faça um algoritmo em para ler o nome, o sexo ( M ou m para masculino e F ou f para feminino), a altura e o peso de um grupo de 10 pessoas. O programa de deve calcular e exibir:

o número de homens;
o número de mulheres;
a altura média dos homens;
 a altura média das mulheres; a altura média do grupo;
o peso médio dos homens;
o peso médio das mulheres;
e o peso médio do grupo*/

#include <stdio.h>

main()
{

    char nome[10];
    char sexo;
    float altura, peso;
    float numero_homens = 0;
    float numero_mulheres = 0;
    float media_altura_homens = 0, media_altura_mulheres = 0, media_altura_grupo = 0;
    float media_peso_homens = 0, media_peso_mulheres = 0, media_peso_grupo = 0;

    /*Faça um algoritmo em para ler o nome, o sexo ( M ou m para masculino e F ou f para feminino), a altura e o peso de um grupo de 10 pessoas.*/
    for (int i = 0; i < 10; i++)
    {
        printf("digite seu nome: %d:", i + 1);
        scanf("\n%c", &nome[i]);

        printf("digite o sexo (M para masculino e F para feminino):");
        scanf("\n%c", &sexo);

        printf("digite sua altura:");
        scanf("\n%f", &altura);

        printf("digite seu peso:");
        scanf("\n%f", &peso);

        if (sexo == 'M')
        {
            numero_homens++;               /*o número de homens;*/
            media_altura_homens += altura; /*a altura média dos homens;*/
            media_peso_homens += peso;     /*o peso médio dos homens;*/
        }
        else if (sexo == 'F')
        {
            numero_mulheres++;               /*o número de mulheres;*/
            media_altura_mulheres += altura; /*a altura media das mulheres*/
            media_peso_homens += peso;       /*o peso medio das mulheres*/
        }
        media_altura_grupo += altura; /*a altura média do grupo;*/
        media_peso_grupo += peso;     /*e o peso médio do grupo*/
    }

    media_altura_homens /= numero_homens;
    media_altura_mulheres /= numero_mulheres;
    media_altura_grupo /= 10;
    media_peso_homens /= numero_homens;
    media_peso_mulheres /= numero_mulheres;
    media_peso_grupo /= 10;

    /*o número de homens;
    o número de mulheres;
    a altura média dos homens;
    a altura média das mulheres; a altura média do grupo;
    o peso médio dos homens;
    o peso médio das mulheres;
    e o peso médio do grupo*/

    /*imprimir*/
    printf("\no numero de homens é: %.2f", numero_homens);
    printf("\n o numero de mulheres é: %.2f", numero_mulheres);
    printf("\na altura media dos homens é: %.2f", media_altura_homens);
    printf("\na altura media das mulheres é: %.2f", media_altura_mulheres);
    printf("\n a altura media do grupo é: %.2f", media_altura_grupo);
    printf("\no peso medio dos homens é: %.2f", media_peso_homens);
    printf("\no peso medio das mulheres é: %.2f", media_peso_mulheres);
    printf("\no peso medio do grupo é: %.2f", media_peso_grupo);
}