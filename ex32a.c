#include <stdio.h>
#include <locale.h>
#define      M       1.852
#define      S       1.609
#define      R       1475
#define      ST      7.468
#define      G       7412.6
int main()

{
	int dym;
	float m, s, r, st, g;
	setlocale(LC_CTYPE, "RUS");
	puts("Введите значение для расчета");
	scanf_s("%d", &dym);
	m = (M * dym) / 1000;
	s = S * dym;
	r = (R * dym) / 1000;
	st = ST * dym;
	g = G * dym;
	printf("Перевод из морских миль: %2.2f км\n", m);
	printf("Перевод из сухопутных миль: %2.2f км\n", s);
	printf("Перевод из римских миль: %2.2f км\n", r);
	printf("Перевод из старорусских миль: %2.2f км\n", st);
	printf("Перевод из географических миль: %2.2f км\n", g);
}
