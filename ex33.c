#include <stdio.h>
#include <locale.h>
int main() {
    int a, b;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите a и b");
    scanf_s("%d%d", &a, &b);
    puts(" _____________________________");
    puts("|   a*b   |   a+b   |   a-b   |");
    puts(" ------------------------------");
    printf("| %3d*%3d | %3d+%3d | %3d-%3d |\n", a, b, a, b, a, b);
    puts(" ------------------------------");
    printf("| %7d | %7d | %7d |\n", a * b, a + b, a - b);
    puts(" _____________________________");

    return 0;
}
