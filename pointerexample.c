#include<stdio.h>
int main(){
 
 int number=10;
 int *ptr=&number;
 printf("value of : %d\n",number);
 printf("address of the number var :%p\n",number);
 printf("address of the ptr pointer :%p\n",*ptr);
 printf("address of ptr var :%p\n",ptr);
 printf("value of the ptr pointer %d\n",*ptr);

    return 0;
}