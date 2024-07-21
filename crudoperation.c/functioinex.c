#include<stdio.h>


void sum (int a,int b){
    printf("\nThe sum is: %d",a+b);
}



void sub(int a,int b){
    printf("\nThe sub is: %d",a-b);
}



void div(int a,int b){
    printf("\n1The div is: %d",a/b);
}


void oddEven(){
   
    int number;

    printf("Enter the number:");

    scanf("%d",&number);

    if (number % 2 == 0){
        printf("\nThe number is even\n");

    }
    else{

        printf("\nThe number is odd\n");
    }
}

int main(){

    int a,b;

    // printf("Enter the value of a and b \n:");

    // scanf("%d%d",&a,&b);

    // sum(a,b);

    // sub(a,b);

    // div(a,b);


    for (int i = 0; i < 20 ; i++)
    {
        oddEven();
        
    }
    return 0;
}