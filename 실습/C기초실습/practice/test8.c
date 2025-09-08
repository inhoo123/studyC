#include <stdio.h>
int main()
{
    int x = 1, y = 2, z = 3;

    printf("%d\n", 10 * 2 / 5 * 2);
    printf("%d\n", 10 - 2 * 5 + 2 / 2); // 자동정렬 단축키 옵션 쉬프트 F
    printf("%d\n", ++x * z--);
    printf("%d\n", x + z >= z + !y);
    printf("%d\n", x || y && z);
    printf("%d\n", z += x >> 2 + ++y);
    printf("%d\n", x = y = z = 5);
    printf("%d\n", (x = 1 + 2, 2 - 1));

    return 0;
}