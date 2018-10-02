#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x,y;
	printf("input two integers  :  ");
	scanf ("%i%i",&x,&y);
	
	printf("\n + result is %i",x+y);
	printf("\n - result is %i",x-y);
	printf("\n * result is %i",x*y);
	printf("\n / result is %i",x/y);
	printf("\n %% result is %i",x%y);
	
	
	return 0;
}
