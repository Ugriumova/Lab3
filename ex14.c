#include <stdio.h>
#include <locale.h>
#define      k       273.15
int main(void) {
    float t;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите температуру в градусах по Цельсию");
    scanf_s("%f", &t);
    printf("Температура в градусах по Кельвину = %4.2f\n", t + k);
    printf("Температура в градусах по Фаренгейту = %4.2f", (1.8 * t) + 32);

    return 0;
}
