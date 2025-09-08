#include <stdio.h>
int main()
{
    float height;
    printf("키(cm)를 입력하세요:"); 
    scanf("%f",&height);
    float inch_height= height/2.54;
    printf("입력하신 키 %.2f센티미터는 %.2f피트와 %.2f인치에 해당됩니다",height,inch_height/12.0,
    inch_height);

    return 0;
}
/*센티미터(cm)로 표현된 키를 입력하면 피트(feet)와 인치(inch)로 변환하는 프로그램을 작성하시오.*/