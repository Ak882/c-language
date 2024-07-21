#include<stdio.h>

void trafficlight(){
    int number,number1;
    printf("==================================================");
    printf("traffic light rules :\n");
    printf("red light : 1\nyello light : 2\ngreen light : 3\n");
    printf("Enter your number :");
    scanf("%d",&number);
    if(number == 1){
        printf("this is the red light \n what is your vehicle type :\n");
        printf("Ambulance==1\npolice==2\nnormal vehicle==3\n");
        printf("enter your vehicle number : ");
        scanf("%d",&number1);
        if(number1==1){
            printf("you can go\n");
        }
        else if(number1==2){
            printf("you can't go\n");
        }
        else if(number1==3){
            printf("you can go\n");
        }
    }
    else if(number==2){
        printf("this is the yello light\n what is your vehicle type :\n ");
        printf("Ambulance==1\npolice==2\nnormal vehicle==3\n");
        printf("enter your vehicle number : ");
        scanf("%d",&number1);
        if(number1 == 1){
            printf("you can't go\n");
        }
         else if(number1 == 2){
            printf("you can't go\n");
        }
        else if(number1 == 3){
            printf("you can go\n");
        }
    }
    
    else{
        printf("you can go \n");
    }
}

int main(){
    trafficlight();
    trafficlight();
    return 0;
}