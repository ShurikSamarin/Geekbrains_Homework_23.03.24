#include <stdio.h>

int main() {
    int num;
    int count = 0;

    printf("Введите целое положительное число: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Ошибка: Введите положительное число\n");
        return 1;
    }

    while (num > 0) {
        count++;
        num /= 10;
    }

    if (count == 3) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
