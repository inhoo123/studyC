#include <stdio.h>

int main()
{
    int num;

    printf("네 자리 정수를 입력하시오");
    scanf("%d",&num);

    int thousand_num =  num/1000;
    int hundred_num =  num%1000/100;
    int ten_num =  num%100/10;
    int one_num = num%10/1;
    
    printf("천의 자리:%d\n백의 자리:%d\n십의 자리:%d\n일의 자리:%d\n"
        ,thousand_num,hundred_num,ten_num,one_num);

        return 0;
}