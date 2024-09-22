#include <stdio.h>
#include <locale.h>
float main() {
    float a, b;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите высоту и ширину прямоугольника");
    scanf_s("%f%f", &a, &b);
    printf("Периметр прямоугольника =  %3.2f\n", (a + b) * 2);
    printf("Площадь прямоугольника =  %3.2f\n", a * b);

    return 0;
}
