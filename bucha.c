#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "");
    int num, i, quantos, max = (-2147483646), min = 2147483646, sair = 1;
    do
    {
        printf("Quantos números queres?");
        scanf("%i", &quantos);
        for (i = 1; i <= quantos; i++)
        {
            printf(" valor do %iº número?\n", i);
            scanf("%i", &num);
            if (num > max)
            {
                max = num;
            }
            if (num < min)
            {
                min = num;
            }
        }
        printf("O número máximo é: %i e o mínimo é: %i\n", max, min);
        printf("Deseja sair? (0-Sair, 1-Continuar)\n");
        scanf("%i", &sair);
    } while (sair != 0);
    return 0;
}