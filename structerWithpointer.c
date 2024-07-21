#include<stdio.h>
#include<string.h>

struct pointer{
    int number;
    char name[10];
    int *ptr1 = &number;
    char *ptr = &name;

};
int main(){
 struct pointer p1={1,"ajay"};
 printf("number of :%d",p1.number);




    return 0;
}
