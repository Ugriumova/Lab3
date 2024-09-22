#include <stdio.h>
#include <math.h>
#include <locale.h>
float main() {
    float s1, s2, g, g2;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите первую сторону");
    scanf_s("%f", &s1);
    puts("Введите вторую сторону");
    scanf_s("%f", &s2);
    g2 = (s1 * s1) + (s2 * s2);
    g = sqrt(g2);
    printf("Площадь треугольника = %4.3f\n", (s1 * s2) / 2);
    printf("Периметр треугольника = %4.3f\n", s1 + s2 + g);
    return 0;
}
