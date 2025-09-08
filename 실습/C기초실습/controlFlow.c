#include <stdio.h>
int main ()
{
    int plus=0;
    int i=0;
    do
    {
        i++;
        if(i%3==0){
            plus += i;
        }
    }
    while (i<=100);
    printf("3의배수의합:%d\n",plus);
    //do while
    

    /*int plus= 0;
    int i = 1;
    while(i<=100){
        i++;
        if(i%3==0){
            plus += i;
        }
    }
    printf("3의배수 총합:%d\n",plus);
    //while
    
    return 0;
    */
    /*    int plus=0;
     for(int i=1;i<101; i++)
     {
         if(i%3 == 0)
         {
             plus+=i;
         }
     }
     printf("3의배수 총합:%d\n",plus);
    */
   //for
}