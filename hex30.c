#include <stdio.h>
#include <locale.h>
#define      f       2.2
#define      u       35.27
float main(void) {
    float k;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите число килограмм");
    scanf_s("%f", &k);
    printf("Число фунтов = %4.3f\n", k * f);
    printf("Число унций = %4.3f\n", k * u);
    return 0;
}
