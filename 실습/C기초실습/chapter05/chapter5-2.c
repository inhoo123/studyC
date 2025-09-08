#include <stdio.h>

int main()
{
    int score;
    char grade;
    printf("당신의 점수를 입력하시오 100~0\n");
    scanf("%d", &score);
    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'D';
    else if (score >= 60)
        grade = 'E';
    else if (score >= 50)
        grade = 'F';

    printf("당신의 성적 %c\n",grade);
    return 0;
}
// 입력된 x가 양수인지,0인지,음수인지 셋 중 한 가지를 출력하기
// 자동 정렬 shift + option +f