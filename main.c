#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <wchar.h>
int main() {
    system("chcp 1251");
    system("cls");
    float a;
    printf("Choose 1 number: ");
    scanf("%f", &a);
    float b;
    printf("Choose 2 number: ");
    scanf("%f", &b);
    float vop;
    printf("Choose number: (1 - plus, 2 - minus, 3 - split, 4 - multiply) ");
    scanf("%f", &vop);

    if (vop == 1) {
        float c;
        c = a + b;
        printf("%f + %f = %f\n", a,b,c);
    } else if (vop == 2) {
        float c;
        c = a - b;
        printf("%f - %f = %f\n", a,b,c);
    } else if (vop == 3) {
        float c;
        c = a / b;
        printf("%f / %f = %.2f\n", a,b,c);
    } else {
        float c;
        c = a * b;
        printf("%f * %f = %f\n", a,b,c);
    }
}