#include<stdio.h>
#include<string.h>
struct employee{
    int seatnumber;
    char name[50];
    int age;

};
int main(){
    struct employee st1={1,"ajay",19};
    printf("seat number of the employee :%d\n",st1.seatnumber);
    printf("name of the employee : %s\n",st1.name);
    printf("age of the employee :%d\n",st1.age);
    printf("\n===============================================================\n");
    struct employee st2={2,"tanu",19};
    printf("seat number of the employee :%d\n",st2.seatnumber);
    printf("name of the employee : %s\n",st2.name);
    printf("age of the employee :%d\n",st2.age);


    return 0;
}