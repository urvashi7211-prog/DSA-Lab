#include<stdio.h>
int main(){
    int sec , min , hour ,sec1 ,sec2;
    printf("Enter seconds :");
    scanf("%d",&sec);
    hour = sec / 3600;
    sec1 = sec % 3600;
    min = sec1 / 60;
    sec2 = sec1 % 60;
    printf("%02d:%02d:%02d",hour,min,sec2);
    return 0;
}