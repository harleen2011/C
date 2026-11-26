#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	float nota;
	printf("diz o nota do aluno?");
	scanf_s("%f", &nota); //ler a nota;
	if (nota < 9.5)
	{
		printf("Reaporvado");
	}
	else
	{
		printf("aporvado");
	}
	return 0;
		}