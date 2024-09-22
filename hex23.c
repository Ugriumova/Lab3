#include <stdio.h>
#include <math.h>
#include <locale.h>
float main() {
    float a, g, g2;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите сторону квадрата");
    scanf_s("%f", &a);
    g2 = (a * a) * 2;
    g = sqrt(g2);
    printf("Радиус описанной окружности = %4.3f\n", g / 2);
    printf("Радиус вписанной окружности = %4.3f\n", a / 2);
    return 0;
}
