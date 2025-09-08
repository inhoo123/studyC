#include <stdio.h>
int main()
{
    int n1,n2;
    int max,min;

    printf("첫번째 정수를 입력하세요:\n");
    scanf("%d", &n1);

    printf("두번째 정수를 입력하세요:\n");
    scanf("%d", &n2);
    
    max = (n1 > n2)? n1:n2;
    min = (n1 < n2)? n1:n2;

    printf("max/min 몫:%d\n 나머지:%d\n",max/min,max%min);

    return 0;
}