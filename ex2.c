#include <stdio.h>
#include <locale.h>
int main(void)
{
	int numm;
	setlocale(LC_ALL, "");

	do {
		printf("Diz um número\n");
		scanf_s("%d", &numm);

		if (numm % 3 == 0 && numm % 5 != 0) {
			printf("É múltiplo de 3\n");
		}
		else if (numm % 5 == 0 && numm % 3 != 0) {
			printf("É múltiplo de 5\n");
		}
		else if (numm % 5 == 0 && numm % 3 == 0) {
			printf("É múltiplo de 3 e 5\n");
		}
		else {
			printf("");
		}
	} while (numm != 0);
	printf("\vDigitou 0 -vai sair do programa!\v");
	return 0;
}
 