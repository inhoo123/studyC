#include <stdio.h>
int main()
{
    int n1,n2,max,min;

    printf("두 정수 입력 :");
    scanf("%d %d",&n1, &n2);

    (n1>n2)?(max =n1,min = n2):(max = n2,min = n1);

    printf("\n>>큰 수 / 작은 수 + %d\n",max/min);
    printf(">>큰 수 %% 작은수 = %d\n", max % min);
    
    return 0;

}