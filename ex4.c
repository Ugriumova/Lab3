#include <stdio.h>
#include <locale.h>
#define      g       9.8
float main() {
    float m, h;
    setlocale(LC_CTYPE, "RUS");
    printf("Введите массу тела - ");
    scanf_s("%f", &m);
    printf("Введите высоту - ");
    scanf_s("%f", &h);
    printf("Сила тяжести =  %5.3f\n", m * g);
    return 0;
}
