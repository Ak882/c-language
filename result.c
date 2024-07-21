#include<stdio.h>

int result(){
    int number;

    for(int i=0; i<=50; i++ ){
        printf("\n%d enter your number :",i);
        scanf("%d",&number);
        if(number>=33){
            printf("you have got 33 mark then you are pass.\n ");
            if((number >= 33 ) && (number <= 40)){
                printf("you are passed with 3rd division.\n ");
            }

            else if((number>=40)&&(number<=59)){
                printf("you are passed with 2nd division.\n ");
            }
            else 
            {
                printf("you are passed with 1st division.\n ");
            }


        }
        else{
            printf("you are fail ");
        }

    }
}
int main(){
    result();
    return 0;
}