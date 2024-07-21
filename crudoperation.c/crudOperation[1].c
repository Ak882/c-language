#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STUDENT 50
#define MAX_NAME_LENGTH 50

struct Student
{
   char name[MAX_NAME_LENGTH];
   char class[5];
   int roll;
   int hindi;
   int english;
   int math;
   int total;
};

struct Student max_student[MAX_STUDENT];
int num_student = 0;

void Add_Student(){
    
    if(num_student < MAX_STUDENT){
        
        struct Student new_student;

        printf("Enter your Name : ");
        scanf("%s",&new_student.name);

        printf("Enter your Class : ");
        scanf("%s",&new_student.class);

        printf("Enter your Roll No. : ");
        scanf("%d",&new_student.roll);

        printf("Enter your Hindi Marks : ");
        scanf("%d",&new_student.hindi);

        printf("Enter your english marks: ");
        scanf("%d",&new_student.english);

         printf("Enter your maths marks: ");
        scanf("%d",&new_student.math);

         printf("Enter your total marks : ");
        scanf("%d",&new_student.total);

        max_student[num_student++]=new_student;
        printf("Successfull added your student.");

    }
    else{
        printf("limid is denied, can not add more student.");
    }
}
int main(){ 
    int choice ;
    while (1)
    {
        printf("All access functionallity : \n");
        printf("1. Create Student\n");
        printf("2. Read Student \n");
        printf("3. Update Student \n");
        printf("4. Delete Student \n");
        printf("5. Exit Student \n");

        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            Add_Student();
            break;
        
        default:
            break;
        }
    }
    

    return 0;
}