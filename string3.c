#include<stdio.h>

int main(){
    char str[50];

    printf("Enter your name : ");

    scanf("%[^\n]s",str);

    printf("%s",str);



    return 0;
}