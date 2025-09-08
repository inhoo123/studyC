#include <stdio.h>
int main()
{
    int num =0;

    for(int i=0;i<10;i++){
       
        if(i%2==0){
            num+=i;
        }
        /*
            i % 2 ? 0 : (i < 10);
        */

    }
    printf("1부터 10까지 짝수의 합:%d\n",num);
    return 0;
}
/*
1~10까지의 짝수들의 총합을
for 문을 이용하여 프로그램 작성하시오
*/