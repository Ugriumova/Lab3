#include <stdio.h>
#include <locale.h>
float main() {
    float u, r;
    setlocale(LC_CTYPE, "RUS");
    printf("Введите напряжение - ");
    scanf_s("%f", &u);
    printf("Введите сопротивление - ");
    scanf_s("%f", &r);
    printf("Сила тока =  %5.3f\n", u / r);


    return 0;
}
