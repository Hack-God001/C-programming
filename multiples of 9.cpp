#include <stdio.h>

int main(){
	int x;
	printf("PROGRAM TO PRINT MULTIPLES OF 9..\n");
	
	for(x=1;x<=1000;x++)
		if (x % 9==0){
			printf("%d \n", x);
		}
		return 0;
}
