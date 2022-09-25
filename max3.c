#include<stdio.h>

int main(void){

    int max,a,b,c;

    printf("숫자를 입력해주세요! : ");
    scanf("%d",&a);
    printf("숫자를 입력해주세요! : ");
    scanf("%d",&b);
    printf("숫자를 입력해주세요! : ");
    scanf("%d",&c);

    max = a;
    if(b>max){max = b;}
    if(c>max){max = c;}

    printf("가장 큰 수는 %d 입니다.\n", max);
    return 0;

}
