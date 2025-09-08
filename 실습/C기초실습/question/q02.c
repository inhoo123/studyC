#include <stdio.h>
int main ()
{   
    float weight;
    printf("kg단위의 무게를 입력하세요:");
    scanf("%f",&weight);
    printf("입력하신 무게 %.2fkg은 %.2flbs에 해당됩니다.",weight,weight/0.45359237);



    return 0;
}