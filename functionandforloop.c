#include<stdio.h>

int main(){
    int age;
for(  int i =0; i<=18; i++){
    printf("\n%d enter your age  : \n",i);
    scanf("%d",&age);
    if(age>=18){
        printf("you are eligible for vote");
    }
    else{
        printf("your are not eligible for vote");
    }
}
return 0;
}