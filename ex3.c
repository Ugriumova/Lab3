 #include <stdio.h>
 #include <locale.h>
float main() {
    float a;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите сторону куба");
    scanf_s("%f", &a);
    printf("Объем куба =  %3.3f\n", a * a * a);
    printf("Площадь боковой поверхности =  %3.3f\n", 4 * a * a);

    return 0;
}
