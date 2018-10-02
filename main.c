#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x,y,z;
	
	printf("input three numbers :  ");
	scanf("%i%i%i",&x,&y,&z);
	
	
	printf("The mean of %i,%i,%i is : %f", x,y,z,(double)(x+y+z)/3);
		
	

	
	return 0;
}
