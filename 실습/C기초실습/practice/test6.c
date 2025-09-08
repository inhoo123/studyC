#include <stdio.h>

int main() {
   char c;
   printf("문자를 입력하세요:");
   scanf("%c",&c);
   printf("%c의 ASCII 코드 값은 %d입니다.",c,c);

   return 0;
}