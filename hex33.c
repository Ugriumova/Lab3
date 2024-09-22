#include <stdio.h>
#include <locale.h>
#define      Pa       133.32
#define      Ba        750.06168282
float main(void) {
    float ml;
    setlocale(LC_CTYPE, "RUS");
    puts("Введите число мл.ртутного столба");
    scanf_s("%f", &ml);
    printf("%f мл.ртутного столба равно %4.3f паскалей\n", ml, Pa * ml);
    printf("%f мл.ртутного столба равно %4.3f бар\n", ml, ml / Ba);
    return 0;
}
