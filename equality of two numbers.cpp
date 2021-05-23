#include <stdio.h>

int main(){
	
	printf("CHECKING THE EQUALITY OF TWO NUMBERS...\n\n");
	printf("Enter the two numbers to check their equality..\n\n");
	
	int x;
	int y;
	printf("Enter integer 1: ");
	scanf("%d", &x);
	printf("Enter integer 2: ");
	scanf("%d", &y);
	
	if(x==y){
		printf("TWO NUMBERS ARE PROVED TO BE EQUAL..\n");
	}else{
		printf("TWO NUMBERS ARE AIN'T THE SAME...\n");
	}
	
	return 0;
	
}
