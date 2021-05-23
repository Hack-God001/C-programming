#include <stdio.h>

int main(){
	
	printf("FINDING THE MAXIMUM OF TWO NUMBERS\n\n\n");
	int x;
	int y;
	printf("\nEnter the first value: ");
	scanf("%d", &x);
	printf("\n\n\nEnter the second value: ");
	scanf("%d", &y);
	
	(x>y) ? printf("First value is the maximum number..") : printf("Second value is the maximum number..");
	
}
