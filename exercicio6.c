/*Desenvolver um algoritmo que solicita o usuário um determinado um mês/ano, determinar e exibir o número de dias do mês/ano digitado.
 Considerar a existência de anos bissextos: (ano % 4 = 0 e ano % 100 =/= 0) ou ano % 400 = 0.
 Ao final do programa deve ser impressa a seguinte mensagem: VOCÊ DESEJA OUTRAS ENTRADAS (S/?)?
 Se a resposta for S o programa deverá retornar ao começo, caso contrário (qualquer outro caractere) deverá encerrar a sua execução. */

#include <stdio.h>

main()
{

    int mes, dias, ano;
    int resposta;

    printf("digite o mes: 9(1 a 12)");
    scanf("%d", &mes);
    /*se o numero digitado não correspoder deve se pedir para digitar novamente*/
    if (mes < 1 || mes > 12)
    {
        printf("mes invalidado: tente novamente\n");
    }
    printf("digite o ano");
    scanf("%d", &ano);

    /*Considerar a existência de anos bissextos: (ano % 4 = 0 e ano % 100 =/= 0) ou ano % 400 = 0.*/
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
        /*ano bissexto*/
        switch (mes)
        {
        case '2':
            dias = 29;
            break;
        case '4':
        case '6':
        case '9':
        case '11':
            dias = 30;
        default:
            dias = 31;
            break;
        }
    else
    {
        // Ano não bissexto
        switch (mes)
        {
        case 2:
            dias = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            dias = 30;
            break;
        default:
            dias = 31;
            break;
        }
    }
    printf("o mes %d %d tem %d dias.\n", mes, ano, dias);

    printf("deseja outras entradas (S/?)?");
    scanf("%d", &resposta);

    for (int i = 0; i < resposta; i++)
    {
    }
}