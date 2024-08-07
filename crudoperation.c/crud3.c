#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define MAX_TEACHER 50
#define MAX_NAME_LENGTH 50


struct teacher
{
    char name[MAX_NAME_LENGTH];
    char department[30];
    char your_rol[30];
    char subject_name[30];
    int room_number;
};
struct teacher t12[MAX_TEACHER];

    int num_teacher=0;

void add_teacher(){
        if (num_teacher<MAX_TEACHER)
        {
            struct teacher t1;
        
        printf("Enter the name of the teacher: \n");
        scanf("%s",&t1.name);

        printf("Enter the department of the teacher: \n");
        scanf("%s",&t1.department);

        printf("Enter your_rol :\n");
        scanf("%s",&t1.your_rol);

        printf("Enter your subject_name  :\n");
        scanf("%s",&t1.subject_name);

        printf("Enter your room_number :\n");
        scanf("%d",&t1.room_number);

        t12[num_teacher++]=t1;
        printf("Successsfully added a teacher .\n");
        }
        else
        {
            printf("Sorry, the maximum number of teacher has been reached.\n");
        }

    }
void read()
{
        if(num_teacher==0)
        {
            printf("No teacher added here.");
        }
        else
        {
                printf("teacher records \n");
                printf("name\tdepartment\tyour_rol\tsubject_name\troom_number\n");
        
            
                for(int i=0; i<num_teacher; i++)
                {
                     printf("%s\t %s\t %s\t %s\t  %d\t\n",t12[i].name,t12[i].department,t12[i].your_rol,t12[i].subject_name,t12[i].room_number);
                }
        }
        
}
void update()
    {

        int seat_number;

        printf("Enter seat number of teacher you want to update :");
        scanf("%d",&seat_number);

        for( int i = 0; i < num_teacher; i++)
        {

            if(t12[i],seat_number==seat_number)
            {

                printf("Enter the name of the teacher: \n");
                scanf("%s",&t12[i].name);

                printf("Enter the department of the teacher: \n");
                scanf("%s",&t12[i].department);

                printf("Enter your_rol :\n");
                scanf("%s",&t12[i].your_rol);

                printf("Enter your subject_name  :\n");
                scanf("%s",&t12[i].subject_name);

                printf("Enter your room_number :\n");
                scanf("%d",&t12[i].room_number);
        
                printf("student record successfully updated.");
            }
    }
}
void delete()
{
    int seat_number;
    
    printf("Enter seat number of teacher you want to delete :");
    scanf("%d",&seat_number);

    for (int i = 0; i < num_teacher ; i++)
    {
        if (t12[i],seat_number==seat_number)
        {
            for (int j = i; j < num_teacher; j++)
            {
                t12[j] = t12[j+1];
            }
                num_teacher--;
                printf("student record successfully deleted.");
        }
    }
     printf("teacher with seat_number %d not found. \n",seat_number);
}

int main(){
        int choice;
        while (1)
        {
            printf("1.Add a teacher\n");
            printf("2.Read the teacher records\n");
            printf("3.Update the teacher records\n");
            printf("4.Delete the teacher records\n");


            scanf("%d",&choice);

            switch (choice)
            {
                case 1:
                add_teacher();
                break;
                case 2:
                read();
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
