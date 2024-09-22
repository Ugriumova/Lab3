#include <stdio.h>
#include <locale.h>
#define      F       0.453592
float main() {
    float f1, k;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите число фунтов");
    scanf_s("%f", &f1);
    k = f1 * F;
    printf("%f фунтов равен %f килограмм\n", f1, k);
    printf("%f фунтов равен %4.6f тонн\n", f1, k / 1000);
    printf("%f фунтов равен %4.3f грамм\n", f1, k * 1000);

    return 0;
}
