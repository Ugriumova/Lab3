#include <stdio.h>
#include <locale.h>
#define      KK       238.845889
#define      CH       0.277778
float main(void) {
    float mj;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите число мегаджоулей");
    scanf_s("%f", &mj);
    printf("%f мегаджоулей равно %4.3f килокалорий\n", mj, KK * mj);
    printf("%f мегаджоулей равно %4.3f киловат/час\n", mj, CH * mj);
    return 0;
}
