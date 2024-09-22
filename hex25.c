#include <stdio.h>
#include <math.h>
#include <locale.h>
float main(void) {
    float a;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите длину ребра");
    scanf_s("%f", &a);
    printf("Площадь тетраэдра = %4.3f\n", a * a * sqrt(3));
    printf("Объем тетраэдра = %4.3f\n", (a * a * a * sqrt(2)) / 12);
    return 0;
}
