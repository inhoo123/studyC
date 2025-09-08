#include <stdio.h>

int main()
{
    /*홍길동은 10점 만점의 퀴즈를  6번 응시해서 다음과 같은 점수를 획득했다. 8,9,6,5,7,9
    위의 퀴즈점수를 배열을 이용하여 저장후 화면에 출력하기
    홍길동의 점수의 총점과 평균을 출력하기
    */
    int score[] = {8, 9, 6, 5, 7, 9};

    int totalScore = 0;
    int scoreSize = sizeof(score) / sizeof(score[0]); // sizeof 배열 전체 크기를 바이트 단위로 돌려주기 때문에 sizeof(score);만 하게되면 범위를 벗어나서 쓰레기 값이 찍힘
    for (int i = 0; i < scoreSize; i++)
    {
        int eachScore = score[i];
        totalScore += score[i];

        printf("%d\n", eachScore);
    }
    double averageScore = (double)totalScore / scoreSize; // 뒤에 나누는 숫자도 double 형식지정해줘야 이상한 오류값안나옴
    printf("평균 %.2f\n", averageScore);
    return 0;
}