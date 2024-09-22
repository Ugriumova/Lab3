#include <stdio.h>
#include <locale.h>
#define      bi       8
#define      ba       1024
float main() {
    float p, p1;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите пропускную способность В бит/с");
    scanf_s("%f", &p);
    printf("Пропускная способность в Кбайт/с = %4.8f\n", p / (bi * ba));
    puts("Введите пропускную способностьв Кбайт/с");
    scanf_s("%f", &p1);
    printf("Пропускная способность в бит/с = %4.8f", p1 * bi * ba);


    return 0;
}
