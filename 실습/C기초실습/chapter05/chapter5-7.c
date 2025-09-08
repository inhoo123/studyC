#include <stdio.h>

int main() {
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("짝수\n");
    if (num % 2 != 0)
        printf("입력한 값: %d\n", num);

    return 0;
}
