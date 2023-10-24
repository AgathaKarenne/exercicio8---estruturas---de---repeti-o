/*Em um prédio, com 50 moradores, há três elevadores denominados A, B e C. Para otimizar o sistema de controle dos elevadores, foi realizado um levantamento no qual cada usuário respondia:

o elevador que utilizava com mais frequência;
o período que utilizava o elevador, entre:
“M” = matutino;
“V” = vespertino;
“N” = noturno.
Construa um algoritmo que calcule e imprima:

qual o período mais usado de todos e a que elevador pertence;
qual é o elevador mais frequentado e em que período se concentra o maior fluxo;
qual a diferença percentual entre o mais usado dos horários e o menos usado;
qual a percentagem sobre o total de serviços prestados do elevador de média utilização. */

#include <stdio.h>

int main()
{
    int moradores = 50;
    int count_A = 0;
    int count_B = 0;
    int count_C = 0;
    int count_M = 0;
    int count_V = 0;
    int count_N = 0;
    char mais_usado_elevador;
    char mais_usado_periodo;
    int maior_fluxo_elevador;
    int maior_fluxo_periodo;

    for (int i = 1; i <= moradores; i++)
    {
        char elevador, periodo;

        printf("Informe o elevador mais utilizado pelo morador %d (A/B/C): ", i);
        scanf(" %c", &elevador);

        printf("Informe o período de utilização (M/V/N) pelo morador %d: ", i);
        scanf(" %c", &periodo);

        switch (elevador)
        {
        case 'A':
            count_A++;
            break;
        case 'B':
            count_B++;
            break;
        case 'C':
            count_C++;
            break;
        default:
            printf("Elevador inválido. Tente novamente.\n");
            i--; // Decrementa o índice para permitir uma nova entrada.
            continue;
        }

        switch (periodo)
        {
        case 'M':
            count_M++;
            break;
        case 'V':
            count_V++;
            break;
        case 'N':
            count_N++;
            break;
        default:
            printf("Período inválido. Tente novamente.\n");
            i--; // Decrementa o índice para permitir uma nova entrada.
            continue;
        }
    }

    // Identificar o elevador mais usado
    if (count_A >= count_B && count_A >= count_C)
    {
        mais_usado_elevador = 'A';
        maior_fluxo_elevador = count_A;
    }
    else if (count_B >= count_A && count_B >= count_C)
    {
        mais_usado_elevador = 'B';
        maior_fluxo_elevador = count_B;
    }
    else
    {
        mais_usado_elevador = 'C';
        maior_fluxo_elevador = count_C;
    }

    // Identificar o período mais usado
    if (count_M >= count_V && count_M >= count_N)
    {
        maior_fluxo_periodo = 'M';
        maior_fluxo_periodo = count_M;
    }
    else if (count_V >= count_M && count_V >= count_V)
    {
        mais_usado_periodo = 'V';
        maior_fluxo_periodo = count_V;
    }
    else
    {
        mais_usado_periodo = 'N';
        maior_fluxo_periodo = count_N;
    }

    // Calcular a diferença percentual entre o mais usado e o menos usado
    int menor_fluxo = (count_A <= count_B && count_A <= count_C) ? count_A : (count_B <= count_A && count_B <= count_C) ? count_B
                                                                                                                        : count_C;

    float diferenca_percentual = 100.0 * (maior_fluxo_elevador - menor_fluxo) / moradores;

    // Calcular a percentagem sobre o total de serviços prestados do elevador de média utilização
    int total_fluxo_medio = (count_A + count_B + count_C) - maior_fluxo_elevador;
    float percentagem_fluxo_medio = 100.0 * total_fluxo_medio / moradores;

    printf("O elevador mais usado é o elevador %c no período %c.\n", mais_usado_elevador, mais_usado_periodo);
    printf("O elevador mais frequentado é o elevador %c no período %c.\n", (count_A >= count_B && count_A >= count_C) ? 'A' : (count_B >= count_A && count_B >= count_C) ? 'B'
                                                                                                                                                                         : 'C',
           (count_M >= count_V && count_M >= count_N) ? 'M' : (count_V >= count_M && count_V >= count_N) ? 'V'
                                                                                                         : 'N');
    printf("Diferença percentual entre o mais usado e o menos usado: %.2f%%\n", diferenca_percentual);
    printf("Percentagem sobre o total de serviços prestados do elevador de média utilização: %.2f%%\n", percentagem_fluxo_medio);
}
