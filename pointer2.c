#include<stdio.h>
int main(){
int number;
number=30;
char chara='a';
double dub=23;


int* ptr_number=&number;
int* ptr_chara=&chara;
int* ptr_dub=&dub;


printf("value of the number variable :%d\n",number);
printf("size of the number variable :%d byte\n",sizeof(number));
printf("size of ptr_number :%d\n",sizeof(ptr_number));
printf("\n");

printf("value of the char variable :%c\n",chara);
printf("size of the chara variable :%d byte\n",sizeof(chara));
printf("size of ptr_chara :%d\n",sizeof(ptr_chara));
printf("\n");

printf("value of the dub variable :%lf\n",dub);
printf("size of the dub variable :%d byte\n",sizeof(dub));
printf("size of ptr_dub :%d\n",sizeof(ptr_dub));
printf("\n");


    return 0;
}