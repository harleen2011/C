#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int num;
	printf("diz o numero");
	scanf_s("%d", & num);
	if (num)