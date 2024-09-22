#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
    int k1, k2, g2, g;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите первый катет треугольника");
    scanf_s("%d", &k1);
    puts("Введите второй катет треугольника");
    scanf_s("%d", &k2);
    g2 = (k1 * k1) + (k2 * k2);
    g = sqrt(g2);
    printf("Гипотенуза треугольника = %d\n", g);

    return 0;
}
