#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	float num1, num2;
	char operador;
	printf("queres add(+), sub(-), mult(*) ou divide(/)?\n");
	scanf_s("%c", &operador);
	switch (operador)
	{
	case '+':
		printf("o primeiro número: ");
		scanf_s("%f", &num1);
		printf("o segundo número: ");
		scanf_s("%f", &num2);
		printf("o resultado é: %.2f\n", num1 + num2);
		break;
	case '-':
		printf("o primeiro número: ");
		scanf_s("%f", &num1);
		printf("o segundo número: ");
		scanf_s("%f", &num2);
		printf("o resultado é: %.2f\n", num1 - num2);
		break;
	case '*':
		printf("o primeiro número: ");
		scanf_s("%f", &num1);
		printf("o segundo número: ");
		scanf_s("%f", &num2);
		printf("o resultado é: %.2f\n", num1 * num2);
		break;
	case '/':
		printf("o primeiro numero: ");
		scanf_s("%f", &num1);
		printf("o segundo numero: ");
		scanf_s("%f", &num2);
		if (num2 == 0) {
			printf("não dá para dividir por zero\n");
		}
		else {
			printf("o resultado é: %.2f\n", num1 / num2);
		}
		break;
	default:
		printf("este e resultadooooo!\n");
	}

	return 0;
}