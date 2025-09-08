#include <stdio.h>
#define STR(name,major) name"는" major" 학생입니다."

int main()
{
    puts(STR("박원화","정보통신공학과"));
    return 0;
}