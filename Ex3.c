#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int B, A;
	float area;
	printf("Diz o base de quadrado");
	scanf_s("%i", &B);
	printf("Diz o altura de quadrado");
	scanf_s("%i", &A);
	area = B * A;
	float perimetro;
	perimetro = 2 * (B + A);
	printf("area = %.1f/n", area);
	printf("perimetro = %.1f/n", perimetro);

	return 0;
}
