#include<stdio.h>
int sum(){
    printf("no argument and no return value :\n");
}



int sum1(){
    int a =12;
    int b =12;
    return ( a + b );
}



int sum2(int a,int b){
    int e=23;
    int d=45;
    int c= ( e + d );
    printf(" argument with  no return value %d",c);
}



int sum3(int a,int b){
    int g=89;
    int h=79;
    return ( a + b );

}


int main(){
           sum();


           int result=sum1();
           printf("no argument with return value : %d\n",result);


           sum2(23,45);



           int result2=sum3(89,79);
           printf("\nargument with return value : %d\n",result2);

    return 0;
}