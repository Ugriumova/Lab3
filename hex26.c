#include <stdio.h>
#include <math.h>
#include <locale.h>
float main(void) {
    float ax, ay, bx, by, cx, cy, AB, AC, BC, p;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите x1 для вершины A");
    scanf_s("%f", &ax);
    puts("Введите y1 для вершины A");
    scanf_s("%f", &ay);
    puts("Введите x2 для вершины B");
    scanf_s("%f", &bx);
    puts("Введите y2 для вершины B");
    scanf_s("%f", &by);
    puts("Введите x3 для вершины C");
    scanf_s("%f", &cx);
    puts("Введите y3 для вершины C");
    scanf_s("%f", &cy);
    AB = sqrt((bx - ax) * (bx - ax) + (by - ay) * (by - ay));
    AC = sqrt((cx - ax) * (cx - ax) + (cy - ay) * (cy - ay));
    BC = sqrt((cx - bx) * (cx - bx) + (cy - by) * (cy - by));
    p = (AB + AC + BC) / 2;
    printf("Площадь треугольника = %4.3f\n", sqrt(p * (p - AB) * (p - AC) * (p - BC)));
    return 0;
}
