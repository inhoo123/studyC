#include <stdio.h>
int main()
{
    int month;
    printf("월(1~12)입력:");
    scanf("%d",&month);
    (month>=7)?printf("하반기입니다."):printf("상반기입니다.");

    return 0;
}
