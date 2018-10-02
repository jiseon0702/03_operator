#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x,y,z,a;
	
	printf("input the second : ");
	scanf("%i",&x);
	
	y=x/3600;
	z=(x-3600*y)/60;
	a=(x-3600*y)%60;
	printf("The time for %i second is %i : %i : %i ",x,y,z,a);
	

	
	return 0;
}
