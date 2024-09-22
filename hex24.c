#include <stdio.h>
#include <math.h>
#include <locale.h>
#define      g       57.3
float main(void) {
    float w, r;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите угол");
    scanf_s("%f", &w);
    puts("Введите радиус");
    scanf_s("%f", &r);
    printf("Длина дуги = %4.3f\n", r * w);
    printf("Площадь сектора = %4.3f\n", r * ((r * w) / 2));
    printf("Длина хорды = %4.3f\n", fabs(2 * r * sinf(w / 2)));
    return 0;
}
