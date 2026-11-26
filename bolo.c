#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int f, p, fatiasp;
	printf("quantas fatias quers?\n");
	scanf_s("%d", &f);
	printf("quantas pessoas vão comer o bolo?\n");
	scanf_s("%d", &p);
	fatiasp = f / p;
	printf("cada pessoa vai comer %d fatias \n", fatiasp);
	return 0;
}