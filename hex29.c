#include <stdio.h>
#include <locale.h>
#define      r       13.7
float main(void) {
    float a;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите число радиан");
    scanf_s("%f", &a);
    printf("Площадь сектора = %4.3f\n", (r * r * a) / 2);
    return 0;
}
