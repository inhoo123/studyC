#include <stdio.h>

int main()
{
    double ave; // 평균 저장 변수
    int kor, music;

    printf("국어 음악 점수는? "); // 사용자에게 입력 안내
    scanf("%d %d", &kor, &music); // 국어와 음악 점수 입력 받기


    ave = (kor + music) / 2.0; // 두 과목 평균 구하기

    printf("========================\n");
    printf("국어        음악       평균\n");
    printf("-------------------------\n");
    printf("%3d        %3d       %.1f\n", kor, music, ave); // 점수와 평균 출력
    printf("========================\n");

    return 0;
}