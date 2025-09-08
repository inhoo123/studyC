#include <stdio.h>
int main()
{
    char name[32];
    float height,weight;

    printf("당신의 이름을 입력하세요:");
    scanf("%s", name);
    printf("입력된 이름:%s\n",name);
    
    printf("키(cm)를 입력하세요");
    scanf("%f",&height);
    printf("몸무게(kg)를 입력하세요");
    scanf("%f",& weight);

    float ave_weight = (height-100)*0.9;
    printf("당신의 키는 %.1fcm (%.1f feet)입니다.\n",height,height/30.48);
    printf("당신의 체중은 %.1f(%.1f lb입니다.\n",weight,weight*2.0459);
    printf("표중 체중 %.1f과의 차이는 %+.1f입니다.",ave_weight,(ave_weight)-(weight));
}