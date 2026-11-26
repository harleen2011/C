#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int n1, n2, n3;
	printf("diz o primero numero");
	scanf_s("%i,&n1");
	printf("diz o segundo numero");
	scanf_s("%i,&n2");
	printf("diz o terciro numero");
	scanf_s("%i,&n3");
	if (n1 < n2 && n2 > n3)
	{
		printf("n3 e o maior numero");
	}
	else if (n1 > n2);
	{
		printf("n1 e maior numero");
	}
	return 0;
}
