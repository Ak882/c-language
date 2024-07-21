#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

#define MAX_STUDENT 50
#define MAX_NAME_LENGTH 20

struct student{
    char name[MAX_NAME_LENGTH];
    char clas[5];
    int roll;
    int hindi;
    int english;
    int total;
};
struct student s1[MAX_STUDENT];
int num_student=0;

void add_student()
    {

        if(num_student<MAX_STUDENT)
        {
            struct student new_student;

            printf("Enter name of student: ");
            scanf("%s",&new_student.name);

            printf("Enter your class :");
            scanf("%s",&new_student.clas);

            printf("Enter your roll num. :");
            scanf("%d",&new_student.roll);

            printf("Enter your hindi marks :");
            scanf("%d",&new_student.hindi);

            printf("Enter your english marks :");
            scanf("%d",&new_student.english);

            printf("Enter your total number :");
            scanf("%d",&new_student.total);

            s1[num_student++]=new_student;
            printf("Successsfully added a student .\n");
        }
        else{
            printf("your limit is over ,you cat't add more student .");
        }
    }
void display(){
        if(num_student==0){
            printf("No student added here.");
        }
        else{
                printf("students records \n");
                printf("name\t clas\t roll\t hindi\t english\t\n");
                for(int i=0; i<num_student; i++)
                {
                    printf("%s\t %s\t %d\t %d\t  1%d\t\n",s1[i].name,s1[i].clas,s1[i].roll,s1[i].hindi,s1[i].english,s1[i].total);
                }
            }
    }
void update(){

    int roll_number;

    printf("Enter roll number of student you want to update :");
    scanf("%d",&roll_number);

    for( int i = 0; i < num_student; i++){

        if(s1[i].roll == roll_number){

            printf("Enter new students data  :");

             printf("Enter name of student: ");
            scanf("%s",&s1[i].name);

            printf("Enter your class :");
            scanf("%s",&s1[i].clas);

            printf("Enter your roll num. :");
            scanf("%d",&s1[i].roll);

            printf("Enter your hindi marks :");
            scanf("%d",&s1[i].hindi);

            printf("Enter your english marks :");
            scanf("%d",&s1[i].english);

            printf("Enter your total number :");
            scanf("%d",&s1[i].total);

            printf("student record successfully updated.");
    }

  }
  printf("student with roll number %d not found .\n");
}
void delete(){
    int roll_number;

    printf(" Enter the roll number of the student to delete : ");
    scanf("%d",&roll_number);

    for (int i =0; i<roll_number; i++){
        if (s1[i],roll_number == roll_number){
            for (int  j = 0; j < num_student - 1 ; j++)
            {
                s1[j]=s1[j+1]; 
            }
            num_student--;
            printf("student record delete successfully.\n");
        }
    }
    printf("student with roll number %d not found. \n",roll_number);
}
int main()
        {
            int choice;
            while(1){
                printf("1. create a student :\n");
                printf("2. display student :\n");
                printf("3.update student :\n");
                printf("4.delete student\n");
                printf("enter your choice\n");
                scanf("%d",&choice);

                switch(choice){
                    case 1:
                        add_student();
                        break;
                     case 2:
                        display();
                        break;
                    case 3:
                        update();
                        break;
                    case 4:
                        delete();
                        break;
                
                }
            }
        }


