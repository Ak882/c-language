#include<stdio.h>
int main(){
int number[3]={1,2,3};
 int* ptr;
 ptr=number;
 for(int  i=0;i<3;i++){
    printf("%d value of  : %d\n",i,*ptr);
    ptr++;
 }


    return 0;
}