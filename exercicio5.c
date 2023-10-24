/*A Copa do Mundo de Futebol Feminino é a competição mais importante no futebol feminino internacional,
 ela é organizada pela Federação Internacional de Futebol (FIFA) e está acontecendo este ano na França.
 Você foi contratado para desenvolver um algoritmo para realizar uma pesquisa para saber qual das jogadoras listadas na tabela abaixo é considerada a melhor.
  Na pesquisa deverá ser solicitado o nome, idade (maior que 12 anos), sexo (masculino e feminino) da pessoa entrevistada e o voto (não pode ser diferente dos que se encontram na tabela).
 O número de pessoas entrevistadas não poderá ser inferior a 50 e não poderá ultrapassar 300, o algoritmo poderá ser finalizado a qualquer momento desde que se obedeça ao critério anterior. */

#include <stdio.h>
#include <string.h>

char jogadoras()
{

    printf("Qual das jogadoras listadas na tabela abaixo é considerada a melhor?\n");
    printf("opção 1:Sam Kerr - Australia\n");
    printf("opção 2:Alex Morgan - Estados Unidos\n");
    printf("opção 3:Dzsenifer Marozsan - Alemanha\n");
    printf("opção 4:Amandine Henzy - França\n");
    printf("opção 5:Marta Vieira - Brasil\n");

    char opcao;
    printf("opção:");
    scanf("%c", &opcao);

    return opcao;
}

main()
{

    /* O número de pessoas entrevistadas não poderá ser inferior a 50 e não poderá ultrapassar 300, o algoritmo poderá ser finalizado a qualquer momento desde que se obedeça ao critério anterior.*/
    int entrevistados = 0;

    while (1)
    {
        printf("Digite o numero de entrevistados (entre 50 e 300)");
        scanf("%d", &entrevistados);
        if (entrevistados >= 50 && entrevistados <= 300)
        {
            break;
        }
        else
        {
            printf("o numero de entrevistados deve estar entre 50 e 300\n");
        }
        printf("Você selecionou um número válido de entrevistados: %d\n", entrevistados);
    }

    /* Na pesquisa deverá ser solicitado o nome, idade (maior que 12 anos), sexo (masculino e feminino) da pessoa entrevistada e o voto*/

    char nome;
    int idade, genero;

    printf("formulario do entrevistado\n");
    printf("digite seu nome:\n");
    scanf("%c", &nome);
    printf("digite sua idade:(maior que 12 anos)\n");
    scanf("%d", &idade);

    if (idade > 12)
    {
        printf("Você tem %d anos, o que é maior que 12 anos.\n", idade);
    }
    else
    {
        printf("Sua idade não atende aos critérios (menor ou igual a 12 anos).\n");
    }
    printf("digite seu genero (M para masculino e F para feminino):");
    scanf("%d", &genero);

    if (genero == 'M' || genero == 'm')
    {
        printf("Você selecionou Masculino.\n");
    }
    else if (genero == 'F' || genero == 'f')
    {
        printf("Você selecionou Feminino.\n");
    }
    else
    {
        printf("Gênero não reconhecido.\n");
    }
    int opcao = jogadoras();

    printf("selecione sua opção de voto:\n");
    scanf("%c", &opcao);

    /*✓ Exibir a quantidade de votos que cada jogadora recebeu.*/
    int contarVotos[5] = {0}; // Array para contar os votos de cada jogadora
    printf("Quantidade de votos para cada jogadora:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Jogadora %d: %d votos\n", i + 1, contarVotos[i]);
    }
    /*✓ Exibir a jogadora mais votada (caso aconteça empate entre mais de uma jogadora, deverá mostrar todas as que empataram).*/
    int maxVotos = 0;
    printf("jogadoras mais votadas:\n");
    for (int i = 0; i < 5; i++)
    {
        if (contarVotos[i] > maxVotos)
        {
            maxVotos = contarVotos[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (contarVotos[i] == maxVotos)
        {
            printf("jogadora %d %d votos\n", i + 1, maxVotos);
        }
    }
    /*✓ Exibir o nome, idade e sexo de todas as pessoas que participaram da pesquisa, separando por sexo, maior de idade e menor de idade.*/
    // Separar por sexo, maior de idade e menor de idade
    printf("Mulheres:\n");
    for (int i = 0; i < entrevistados; i++)
    {
        if ((entrevistados[i].genero == 'F' || entrevistados[i].genero == 'f'))
        {
            printf("Nome: %c, Idade: %d, Gênero: %d\n", entrevistados[i].nome, entrevistados[i].idade, entrevistados[i].genero);
        }
    }

    printf("Homens:\n");
    for (int i = 0; i < entrevistados; i++)
    {
        if ((entrevistados[i].genero == 'M' || entrevistados[i].genero == 'm'))
        {
            printf("Nome: %s, Idade: %d, Gênero: %c\n", entrevistados[i].nome, entrevistados[i].idade, entrevistados[i].genero);
        }
    }

    printf("Maiores de idade:\n");
    for (int i = 0; i < entrevistados; i++)
    {
        if (entrevistados[i].idade > 12)
        {
            printf("Nome: %s, Idade: %d, Gênero: %c\n", entrevistados[i].nome, entrevistados[i].idade, entrevistados[i].genero);
        }
    }

    printf("Menores de idade:\n");
    for (int i = 0; i < entrevistados; i++)
    {
        if (entrevistados[i].idade <= 12)
        {
            printf("Nome: %s, Idade: %d, Gênero: %c\n", entrevistados[i].nome, entrevistados[i].idade, entrevistados[i].genero);
        }
    }
    /*✓ Exibir o nome das pessoas maior de idade que votaram na Marta Vieira.*/
    printf("Pessoas maiores de idade que votaram na Marta Vieira:\n");
    for (int i = 0; i < entrevistados; i++)
    {
        if (entrevistados[i].idade > 12 && entrevistados[i].voto == 5)
        {
            printf("Nome: %s\n", entrevistados[i].nome);
        }
    }
    /*✓ Exibir a quantidade de mulheres que participaram da pesquisa.*/
    int contarMulheres = 0;
    for (int i = 0; i < entrevistados; i++)
    {
        if (entrevistados[i].genero == 'F' || entrevistados[i].genero == 'f')
        {
            contarMulheres++;
        }
    }
    printf("Quantidade de mulheres que participaram da pesquisa: %d\n", contarMulheres);
}
