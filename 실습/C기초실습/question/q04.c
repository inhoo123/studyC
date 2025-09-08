#include <stdio.h>

int main()
{
    long long gigabytes;
    printf("기가바이트 수치를 입력하세요: ");
    scanf("%lld", &gigabytes);

    long long megabytes = gigabytes * 1024;
    long long kilobytes = megabytes * 1024;

    printf("%lld GB는 %lld MB이고, %lld KB입니다.\n", gigabytes, megabytes, kilobytes);



    return 0;
}