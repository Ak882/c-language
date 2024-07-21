#include<stdio.h>
int main(){

int var=20;
int *ptr=&var;
printf("value of var variable :%d\n",var);
printf("address of var variable :%p\n",var);
printf("\n");

//printf("value of ptr variable :%d\n",ptr);
printf("address of ptr variable :%p\n",ptr);
printf("\n");

printf("value of ptr pointer :%d\n",*ptr);
printf("address of ptr pointer :%p\n",*ptr);



    return 0;

}