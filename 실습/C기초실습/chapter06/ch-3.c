#include <stdio.h>

#define STR(A, B)#A "는 " #B "의 멤버입니다."
#define DATE(Y,M,D)Y ## M ## D
int main()
{
    puts(STR("태양", "빅뱅"));
    puts(STR("서현", "소녀시대"));
    printf("생년월일: %d\n",DATE(11,06,10));
    return 0;
}