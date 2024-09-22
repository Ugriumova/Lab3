#include <stdio.h>
#include <locale.h>
#define      c       0.3
int main() {
    float v;
    setlocale(LC_CTYPE, "RUS");
    printf("Введите частоту сигнала(от 50 до 220 ГГц)\n");
    scanf_s("%f", &v);
    printf("Длина волны = %3.3f\n", c / v);

    return 0;
}
