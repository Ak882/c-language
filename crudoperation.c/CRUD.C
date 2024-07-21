#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_STUDENTS 50
#define MAX_NAME_LENGTH 50

struct Student{
    char name[MAX_NAME_LENGTH];
    char clas[5];
    int roll;
    int hindi;
    int maths;
    int total;

};
struct Student students[MAX_STUDENTS];
    int num_student= 0;

  void Add_Student(){

    if(num_student < MAX_STUDENTS){

        struct Student new_student;

        printf("enter your name :\n");
        scanf("%d",&new_student.name);

        printf("enter your class :\n");
        scanf("%s",&new_student.clas);

        printf("enter your roll  :\n");
        scanf("%d",&new_student.roll);

        printf("enter your hindi :\n");
        scanf("%d",&new_student.hindi);

        printf("enter your maths :\n");
        scanf("%d",&new_student.maths);

        printf("enter your total :\n");
        scanf("%d",&new_student.total);

        students[num_student++] = new_student;
        printf("Successfully added your student.");
    }
    else {
        printf("limit is denied, you can not add more student");
    }
  }

  int main(){

    int choice ;

    while (1) {
        printf("You are access the all  functionallity : \n");
       
        printf("1. Create Student\n"); 

        printf("2. Read Student \n");

        printf("3. Update Student \n");

        printf("4. Delete Student \n");

        printf("5. Exit Student \n");

        scanf("%d",&choice);

        switch (choice)
        {
        case 1:-

            Add_Student();

            break;
        
        default:

            break;
        }
    }
    

    return 0;
}
