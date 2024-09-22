#include <stdio.h>
#include <locale.h>
#define      A      1024
float main() {
    float t, g;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите число террабайт");
    scanf_s("%f", &t);
    printf("Число гигабайт = %4.3f\n", t * A);
    puts("Введите число гигабайт");
    scanf_s("%f", &g);
    printf("Число террабайт = %4.3f", g / 1024);


    return 0;
}
