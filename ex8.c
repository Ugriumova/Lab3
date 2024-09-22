#include <stdio.h>
#include <locale.h>
float main() {
    float s, p;
    setlocale(LC_CTYPE, "RUS");
    printf("Введите сумму вклада - ");
    scanf_s("%f", &s);
    printf("Введите процентную ставку - ");
    scanf_s("%f", &p);
    printf("Доход  =  %5.3f\n", (s / 100) * p);



    return 0;
}
