#include<stdio.h>


int main(){

    int number[5]={1,2,3,4,5};

    int*ptr;

    ptr= number;

    for (int  i=1;i<5;i++){

        printf("%dvalue of :%d\n",i,*ptr);
        
        ptr++;
    }

    return 0;
}