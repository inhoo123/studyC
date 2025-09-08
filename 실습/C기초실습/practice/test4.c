#include <stdio.h>

int main()
{
    float length = 0, height = 0;

    // 밑변과 높이를 한 줄에 입력받기
    printf("밑변,높이:");
    scanf("%f %f", &length, &height);

    float area = (length * height) / 2.0; // 삼각형 면적 계산

    // 원하는 출력 형식에 맞게 한 줄로 출력
    printf("밑변 =%.2fcm, 높이= %.2fcm인 삼각형의 면적= %.2fcm^2\n", length, height, area);

    return 0;
}