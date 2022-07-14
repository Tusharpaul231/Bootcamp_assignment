#include<stdio.h>
int main(){
    char user[25];
    gets(user);
    printf("\"Hello, %s\"",user);
    return 0;
}