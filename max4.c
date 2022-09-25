#include <stdio.h>


int max(int a[]){
    int max1,max2,final_max;

    max1 = a[0];
    if(a[1]> max1){max1 = a[1];}
    max2 = a[2];
    if(a[3] > max2){max2 = a[3];}
    final_max = max2>max1 ? max2 : max1;
    return final_max;
}



int main(void){
    int a[3],final_max;
    for(int i=0; i<4; i++){
    printf("what's num : ");
    scanf("%d",&a[i]);
    }
    //printf("%d",a);
    final_max = max(a);
    printf("max : %d .",final_max);
}