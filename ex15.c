#include <stdio.h>
#include <locale.h>
#define      e       63241.126
int main() {
    float g;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите число световых лет");
    scanf_s("%f", &g);
    printf("Число астрономических единиц = %4.3f\n", g * e);
    return 0;
}
