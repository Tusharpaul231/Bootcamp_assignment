#include<stdio.h>
int main(){
    int d,m,y;
    scanf("%d/%d/%d",&d,&m,&y);
    if(d<32&&m<13&&y<2500)
        printf("Day-%d, Month-%d, Year-%d",d,m,y);
    else
        printf("Enter a vaild date...");
    return 0;
}