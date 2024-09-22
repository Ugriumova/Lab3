#include <stdio.h>
#include <locale.h>
int main()

{
	int num, num1;
	setlocale(LC_CTYPE, "RUS");
	puts("Введите числа");
	scanf_s("%d%d", &num, &num1);
	printf("Введены числа %d %d\n", num, num1);
	printf("Сумма %d и %d равна %d\n", num1, num, num1 + num);
	printf("Разность %d и %d равна %d\n", num1, num, num1 - num);
	printf("Произведение %d и %d равно %d\n", num1, num, num1 * num);
	printf("Частное от деления %d на %d равно %d, а остаток %d\n", num1, num, num1 / num, num1 % num);

}
