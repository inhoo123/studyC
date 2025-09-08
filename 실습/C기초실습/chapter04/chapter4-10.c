#include <stdio.h>
int main()
{
    int x = 5, y=12;

    printf("%d & %d = %d\n", x,y,x&y);//and
    printf("%d | %d = %d\n",x,y,x|y);//or
    printf("%d ^ %d = %d\n",x,y,x^y);//or
    printf("~%d = %d\n",x,~x);//not
    return 0;
}