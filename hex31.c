#include <stdio.h>
#include <locale.h>
#define      B       136.4
#define      G       3.785411784
float main(void) {
    float b, g;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите число баррелей");
    scanf_s("%f", &b);
    puts("Введите число галлонов");
    scanf_s("%f", &g);
    printf("%f баррелей равен %4.3f кг\n", b, b * B);
    printf("%f галлонов равен %4.3f кг\n", g, g * G);
    return 0;
}
