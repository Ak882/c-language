#include<stdio.h>

int main(){
//multiple value with similar data types ko ek single variable me store krvana.
    int number[]={1,2,3,4,5,6,7,8,9,10 }
    int number2;
    number2= 2;

    for (int i = 0 ; i <10 ; i++ ){
 
        number[i] = ( i * 3 )*number2;

    }


    for ( int i= 0 ; i <10 ; i++ ){

        printf(  "The number %d : % d \n",  number2,i  ,  number[i]  );

    }
}