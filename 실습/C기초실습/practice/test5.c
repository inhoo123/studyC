#include <stdio.h>
int main()
{
    float F =0;
    printf("화씨 온도는(F)를 입력하세요.:");
    scanf("%f",&F);
    float C=(5.0/9.0)*(F-32);//float C =(5/9)*(F-32);

    printf("화씨온도 %.1f의 섭씨온도는 %.1f 입니다.",F,C);

    return 0;
}