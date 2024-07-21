#include<stdio.h>
#include<string.h>

int main(){

    char str[]="ajay kumar";

    int length=0;
    printf("name : %s \n",str);
    length = strlen(str);

    printf("The length of the string is:");

    printf("%d\n",length);


    return 0;

}