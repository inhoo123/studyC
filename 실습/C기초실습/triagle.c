#include <stdio.h>
int main() {
    
    int bottom =3, height=10;
    float area= bottom * height / 2.0;

    printf("밑변이 %dcm, 높이가 %dcm인 삼각형의 넓이: %.2f cm^2\n", bottom, height, area);
    // 삼각형의 넓이는 밑변 * 높이 / 2.0 이다.
    // 2.0을 사용하여 실수형으로 나누어야 정확한 결과를 얻을 수 있다.
    // bottom과 height는 int형 변수로, area는 float형 변수로 선언한다.
}