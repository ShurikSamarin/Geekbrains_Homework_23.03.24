#include <stdio.h>

int main() {
    int a, b;
    int sum = 0;

    printf("Введите два целых числа a и b (a <= b): ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("Ошибка: a должно быть меньше или равно b\n");
        return 1;
    }

    for (int i = a; i <= b; i++) {
        sum += i * i;
    }

    printf("Сумма квадратов от %d до %d: %d\n", a, b, sum);

    return 0;
}
