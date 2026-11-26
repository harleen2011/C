#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	char* carros[3] = { "fiat";"volvo";"bmw"};
	printf("%s",carros[0]);
		
}
	
	return 0;
}