#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
    float x, y, c, d, c1, d1;
    setlocale(LC_CTYPE, "RUS");
    printf("Введите координату x\n");
    scanf_s("%f", &x);
    printf("Введите координату y\n");
    scanf_s("%f", &y);
    c = x - y;
    c1 = fabs(c);
    d = y - x;
    d1 = fabs(d);
    if (x < y)  printf("Расстояние между x и y = % 3.2f\n", c1);
    if (x > y)  printf("Расстояние между x и y = % 3.2f\n", d1);
    if (x == y)  printf("Расстояние между x и y = 0");

    return 0;
}
