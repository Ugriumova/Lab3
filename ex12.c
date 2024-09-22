#include <stdio.h>
#include <locale.h>
#include <math.h>
#define      G       6.67*pow(10,-11)
int main(void) {
    float m1, m2, r, f;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите массу первого тела");
    scanf_s("%f", &m1);
    puts("Введите массу второго тела");
    scanf_s("%f", &m2);
    puts("Введите расстояние между телами");
    scanf_s("%f", &r);
    printf("Сила притяжения между телами = %4.10f",(G*m1 * m2) / r * r);
    return 0;
}
