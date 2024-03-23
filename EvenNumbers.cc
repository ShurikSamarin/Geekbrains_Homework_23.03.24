#include <stdio.h>

int main() {
    int num;
    int digit;
    int allEven = 1;

    printf("Введите целое число: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            allEven = 0;
            break;
        }
        num /= 10;
    }

    if (allEven) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
