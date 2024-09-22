#include <stdio.h>
#include <locale.h>
float main(void) {
    float k, s;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите число жителей");
    scanf_s("%f", &k);
    puts("Введите площадь территории");
    scanf_s("%f", &s);
    printf("Плотность населения = %4.3f\n", k / s);
    return 0;
}
