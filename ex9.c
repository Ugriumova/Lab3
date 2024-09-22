#include <stdio.h>
#include <locale.h>
int main() {
    float t;
    setlocale(LC_CTYPE, "RUS");
    printf("Введите временной интервал в секундах - ");
    scanf_s("%f", &t);
    printf("Временной интервал в часах = %5.3f \n", t / 3600);
    printf("Временной интервал в минутах = %5.3f \n", t / 60);

    return 0;
}
