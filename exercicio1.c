/*Um cinema possui capacidade de 100 lugares e está sempre com ocupação total. Certo dia, cada espectador respondeu a um questionário, no qual constava:

- sua idade;

- sua opinião em relação ao filme, segundo as seguintes notas:

Nota        Significado

A              Ótimo

B              Bom

C             Regular

D             Ruim

E              Péssimo

Elabore um algoritmo que, lendo estes dados, calcule e imprima:

a quantidade de respostas ótimo;
a diferença percentual entre respostas bom e regular;
a média de idade das pessoas que responderam ruim;
a percentagem de respostas péssimo e a maior idade que utilizou esta opção;
a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim. */

#include <stdio.h> /*concertar*/

main()
{

	int idade = 0;
	int opniao;
	int capacidade = 100;
	int count_otimo;
	int count_bom;
	int count_regular;
	int count_ruim;
	int count_pessimo;
	int idade_maior_pessimo;
	int idade_maior_otimo;
	int media_idade_ruim = 0;
	int idade_maior_ruim;
	int percentagem_pessimo;
	int quantidade;
	int percentual;

	printf("digite sua idade:\n");
	scanf("%d", &idade);
	printf("qual a sua opnião sobre o filme?\n");
	scanf("%d", &opniao);

	switch (opniao)
	{
	case 'A':
		printf("otimo\n");
		break;
	case 'B':
		printf("bom\n");
		break;
	case 'C':
		printf("regular\n");
		break;
	case 'D':
		printf("ruim\n");
	case 'E':
		printf("pessimo\n");
		break;
	}

	/*a diferença percentual entre respostas bom e regular;*/
	percentual = (count_bom - count_regular);

	/*a percentagem de respostas péssimo e a maior idade que utilizou esta opção;*/
	percentagem_pessimo = count_pessimo / quantidade * capacidade;

	/*a quantidade de respostas ótimo*/
	printf("A - a quantidade de entrevistados que optaram por otimo é:\n", count_otimo);

	/*a diferença percentual entre respostas bom e regular;*/
	printf("a diferença percentual entre respostas bom e regular: \n", percentual / quantidade * capacidade);

	/*a média de idade das pessoas que responderam ruim;*/
	if (count_ruim != 0)
	{
		media_idade_ruim = idade_maior_ruim / count_ruim;
		printf("a média de idade das pessoas que responderam ruim: %.2d.", media_idade_ruim);
	}
	else
	{
		printf("ninguem optou pela resposta 'RUIM'.");
	}

	printf("\na maior idade que respondeu pessimo foi: ", idade_maior_pessimo);
	printf("\na percentagem dos entrevistados que responderam Péssimo foi: %.2d\n", percentagem_pessimo);
	printf("\noptaram por Otimo: ", count_otimo);
	printf("\noptaram por Bom: ", count_bom);
	printf("\noptaram por Regular: ", count_regular);
	printf("\noptaram por Ruim: ", count_ruim);
	printf("\noptaram por Pessimo: ", count_pessimo);
}