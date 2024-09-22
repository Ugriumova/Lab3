#include <stdio.h>
#include <locale.h>
float main() {
    float k, s;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите кол-во товара");
    scanf_s("%f", &k);
    puts("Введите стоимость единицы товара");
    scanf_s("%f", &s);
    printf("Стоимость покупки = %4.3f\n", k * s);
    return 0;
}
