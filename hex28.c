#include <stdio.h>
#include <math.h>
#include <locale.h>
float main(void) {
    float h, o1, o2, s, g, g2;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите высоту");
    scanf_s("%f", &h);
    puts("Введите меньшее основание");
    scanf_s("%f", &o1); \
        puts("Введите большее основание");
    scanf_s("%f", &o2);
    s = (o2 - o1) / 2;
    g2 = (s * s) + (h * h);
    g = sqrt(g2);
    printf("Периметр трапеции = %4.3f\n", o1 + o2 + g + g);
    printf("Площадь трапеции = %4.3f\n", h * ((o1 + o2) / 2));
    return 0;
}
