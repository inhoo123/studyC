#include <stdio.h>

int main()
{

    unsigned char age = 97;
    int max = 2147483647;
    unsigned max_plus = max + 1;

    printf("age = %d\n", age);
    printf("max = %d, max+1 = %u\n", max, max_plus);
    // unsigned int는 부호가 없는 정수형으로, 0부터 2^32-1까지의 값을 가질 수 있다.
    //  %u는 부호가 없는 정수형을 출력하는 서식 지정자이다.
    // vscode 정렬키 shift + option + f
    return 0;
}