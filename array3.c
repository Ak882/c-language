#include<stdio.h>

int main(){

    int number[11];

    int table1;

    printf("enter your table :\n");

    scanf("%d",&table1);

    for(int i=0; i<=10; i++){

        number[i]=table1*i;

    }
    for(int i=1;i<=10;i++){

    printf("\nnumber %d * %d  = %d ",table1,i,number[i]);
    }
    
    return 0;
}