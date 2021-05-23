#include <stdio.h>

int main(){
	printf("Find the number of days in the year..\n\n");
	
	int m;
	
	printf("\n\n\nEnter your favourite year: ");
	scanf("%d");
	int x = 7;  //x represents 1 week = 7days
	int y = 30.8;  // y represents 4.4 weeks = 30.8 days
	float z = 52.1428571; // represnts 52.1 weeks = ??
	int year;
	
	year = (z*x);
	printf("There are %d days in a year..", year);
	
}
