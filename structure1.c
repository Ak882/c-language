#include<stdio.h>
#include<string.h>

struct student{
    int rollno;
    char name[12];
    int age ;
    int seatnumber; 
       };
int main(){
struct student s1={ 12,"ajay",19,25 };
printf("================================================\n");
printf("roll number of the student :%d\n",s1.rollno);
printf("-----------------------------------------------\n");
printf("seat number of the student :%d\n",s1.seatnumber);
printf("------------------------------------------------\n");
printf("name of the student :%s\n",s1.name);
printf("------------------------------------------------\n");
printf("age of the student :%d\n",s1.age);
printf("================================================\n");

    return 0;
}