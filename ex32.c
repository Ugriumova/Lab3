#include <stdio.h>
#include <locale.h>
#define      D       2.54
#define      K       2.32166
int main()
{
	int dym;
	float result, isp;
	setlocale(LC_CTYPE, "RUS");
	puts("Введите значение для расчета");
	scanf_s("%d", &dym);
	result = D * dym;
	isp = K * dym;
	printf("Перевод из дюймов: %2.2f см\n", result);
	printf("Перевод из pulgada: %2.2f см", isp);
}
