#include <stdio.h>
int main ()
{
    int r= 0;
    float length=0;

    
    printf("둘레를 구할 원의 반지름은?");
    scanf("%d",&r);
 
    length = (2 * 3.14) * r;
    printf("반지름이 %d인 원의 둘레는 %.2f\n",r,length);

    return 0;
}