#include <stdio.h>
#include <locale.h>
#define      pi       3.14
#define      k        1.33333333
int main() {
    float d, r;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите диаметр шара");
    scanf_s("%f", &d);
    r = d / 2;
    printf("Площадь поверхности шара = %4.3f\n", 4 * pi * r * r);
    printf("Объем шара = %4.3f\n", k * pi * r * r * r);
    return 0;
}
