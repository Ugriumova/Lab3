#include <stdio.h>
#include <locale.h>
float main() {
    float s, b;
    setlocale(LC_CTYPE, "RUS");
    printf("Введите расстояние, которое хотите проехать - ");
    scanf_s("%f", &s);
    printf("Введите стоимость бензина за единицу расстояния - ");
    scanf_s("%f", &b);
    printf("Стоимость поездки =  %5.3f\n", s * b);



    return 0;
}
