#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_EMPLOYEE 50
#define MAX_NAME_LENGTH 50


struct employee
{
    char name[MAX_NAME_LENGTH];
    char department[30];
    char your_rol[30];
    char project_name[30];
    int seat_number;
    
};
 struct employee em1[MAX_EMPLOYEE];
    int num_employee=0;

void add_employee(){

    if(num_employee<MAX_EMPLOYEE){

        struct employee new_employee;
        printf("Enter the name of the employee: \n");
        scanf("%s",&new_employee.name);

        printf("Enter the department of the employee: \n");
        scanf("%s",&new_employee.department);

        printf("Enter rol of the employee: ");
        scanf("%s",&new_employee.your_rol);

        printf("Enter the project_name of the employee:\n ");
        scanf("%s",&new_employee.project_name);

        printf("Enter the seat_number of the employee: \n");
        scanf("%d",&new_employee.seat_number);

        em1[num_employee++]=new_employee;
        printf("successfully added the employee.\n");

        }
        else{
            printf("your employee list is over you can't add more employees.\n");
        }
}

void display(){

    if(num_employee==0){

        printf("No employee here.\n");
    }
    else
    {
        printf("Employee records\n");
        printf("----------------------------------------------------------------------------\n");
        printf("name\t department\t your_rol\t seat_number\t project_name\n");

        for( int i=0;  i < num_employee; i++){
            printf("%s\t    %s\t\t       %s\t     %d\t     %s\n\n",em1[i].name,em1[i].department,em1[i].your_rol,em1[i].seat_number,em1[i].project_name);
        }
    }
}void update(){
    int seat_number;
    printf("Enter the seat numbervof the employee to update\n");
    scanf("%d",&seat_number);

    for( int i=0;  i<num_employee; i++){
        if(em1[i],seat_number==seat_number){
            printf("update the student data .");

        printf("Enter the name of the employee: \n");
        scanf("%s",&em1[i].name);

        printf("Enter the department of the employee: \n");
        scanf("%s",&em1[i].department);

        printf("Enter rol of the employee: ");
        scanf("%s",&em1[i].your_rol);

        printf("Enter the project_name of the employee:\n ");
        scanf("%s",&em1[i].project_name);

        printf("Enter the seat_number of the employee: \n");
        scanf("%d",&em1[i].seat_number);

        printf("successfully updated employee data. ");
        }
    }
    printf("employee with seat number is %d is not found.");
}

void delete_employee(){

 int seat_number;

    printf("Enter the seat  number of the employee to delete :\n");
    scanf("%d",&seat_number);

    for (int i =0; i<num_employee;i++){
        if (em1[i],num_employee==num_employee){
            for (int j=0; j < num_employee -1; j++){
                em1[i]=em1[j+1];
            }
            num_employee--;
            printf("Employee record successfully deleted.\n");
        }
    
    }
     printf("employee with seat number %d not found. \n",seat_number);
}

int main(){

        int choice;

        while (1)

        {
            printf("1.Add employee\n");
            printf("2.display employee\n");
            printf("3.upadate employee\n");
            printf("4.delete employee\n");
            scanf("%d",&choice);

            switch (choice)
            {
                case 1:

                add_employee();

                break;

                case 2:

                display();
                break;

                case 3:
                update();
                break;

                case 4:
                delete_employee();
                break;
            }
        }
}