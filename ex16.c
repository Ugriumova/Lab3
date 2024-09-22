#include <stdio.h>
#include <locale.h>
#define      m       12
#define      d       365
int main() {
    float g;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите число прожитых лет");
    scanf_s("%f", &g);
    printf("Число прожитых месяцев = %4.3f\n", g * m);
    printf("Число прожитых дней = %4.3f\n", g * d);
    return 0;
}
