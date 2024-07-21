#include <stdio.h>

int main(){

    int counting[] = {0,1,2,3,4,5,6,7,8,9,10};

    int table[10];
    int table1;
     table1 =2;
   // printf("Enter your table number : ");
//scanf("%d",&table1);

    for (int i = 0; i <= 10; i++)
    {
        table[i] = counting[i]*table1;
    }
    for (int i = 1; i <= 10; i++)
    {
        printf(" Table of %d * %d : %d \n",table1 ,i, table[i]);
    }
    


    return 0;
}