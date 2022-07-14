#include<stdio.h>
int main(){
    int h,m;
    scanf("%d:%d",&h,&m);
    if(h<25&&m<60)
        printf("%d hour and %d Minute",h,m);
    else
        printf("Enter a vaild time...");
    return 0;
}