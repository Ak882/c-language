 
#include <stdio.h> 

int main() 
{ 
	int number= 5;

	for (int i = 0; i < number; i++) { 

		for (int j = 0; j <= i; j++) { 

			printf("* "); 
		} 
		printf("\n"); 
	} 
	return 0; 
}
