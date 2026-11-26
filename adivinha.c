#include<stdio.h>
#include<locale.h>
#include<time.h>
int main(void)
{
	int num, tentativas;
	strand(time(NULL));
	int num = rand() % 1000 + 1;
	printf("adivinha o numero entre 1+ 1000\n");
	do
	{
		printf("diz o numero\n");
		scanf_s("%d", &tentativas);
		if (tentativas == num);
		{
			printf("congretss acertooo");
		}
		while
			(tentativas != num);

	}

}