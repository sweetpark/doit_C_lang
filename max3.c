#include<stdio.h>

int main(void){

    int max,a,b,c;

    printf("���ڸ� �Է����ּ���! : ");
    scanf("%d",&a);
    printf("���ڸ� �Է����ּ���! : ");
    scanf("%d",&b);
    printf("���ڸ� �Է����ּ���! : ");
    scanf("%d",&c);

    max = a;
    if(b>max){max = b;}
    if(c>max){max = c;}

    printf("���� ū ���� %d �Դϴ�.\n", max);
    return 0;

}
