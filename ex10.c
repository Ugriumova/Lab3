#include <stdio.h>
#include <locale.h>
int main() {
    int d, m, g, d1, m1, g1;
    setlocale(LC_CTYPE, "RUS");
    printf("Введите день рождения - ");
    scanf_s("%d", &d);
    printf("Введите месяц рождения - ");
    scanf_s("%d", &m);
    printf("Введите год рождения - ");
    scanf_s("%d", &g);
    printf("Введите настоящий день  - ");
    scanf_s("%d", &d1);
    printf("Введите настоящий месяц  - ");
    scanf_s("%d", &m1);
    printf("Введите настоящий год - ");
    scanf_s("%d", &g1);
    if (m < m1)  printf("Ваш возраст = %d лет \n", g1 - g);
    if (m > m1)  printf("Ваш возраст = %d лет \n", g1 - g - 1);
    if (m == m1 && d < d1)  printf("Ваш возраст = %d лет \n", g1 - g);
    if (m == m1 && d > d1)  printf("Ваш возраст = %d лет \n", g1 - g - 1);
    if (m == m1 && d == d1) printf("Ваш возраст = %d лет \n", g1 - g);


    return 0;
}
