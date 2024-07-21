#include<stdio.h>

int voter(){
    int age;
    int number;
    for(int i=1;  i<=5; i++){
    printf("================================\n");
    printf("enter your age :",i);
    scanf("%d",&age);

    if(age>=18){
    printf("you are eligible for vote\n");
    }
    else{
    printf("you are not eligible for vote\n");
    }
    }
}


int main(){

     voter();


    return 0;
}