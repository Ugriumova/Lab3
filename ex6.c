#include <stdio.h>
#include <locale.h>
float main() {
    float r1, r2;
    setlocale(LC_CTYPE, "RUS");
    printf("Введите сопротивление первого резистора - ");
    scanf_s("%f", &r1);
    printf("Введите сопротивление второго резистора - ");
    scanf_s("%f", &r2);
    printf("Общее сопротивление при последовательном соединении =  %5.3f\n", r1 + r2);
    printf("Общее сопротивление при параллельном соединении =  %5.3f\n", (1 / r1) + (1 / r2));


    return 0;
}
