#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <stdlib.h>

int main() {
    int k;

    system("chcp 65001 > nul");

    puts("Введите натуральное число k (k < 20)");
    scanf("%d", &k);

    switch (k)
    {
        case 1:
            printf("в программе найдено %d ошибка\n", k);
            break;
        case 2:
        case 3:
        case 4:
            printf("в программе найдено %d ошибки\n", k);
            break;
        default:
            printf("в программе найдено %d ошибок\n", k);
    }

    system("pause");
    return 0;
}
