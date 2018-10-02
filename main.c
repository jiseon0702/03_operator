#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int year;
	int result;
	
	printf("input the year  :  ");
	scanf("%i",&year);
	
	result = (year%4 == 0 && year % 100 != 0)|| (year%400 == 0);
	
	printf("is the year %i the leap year? : %i",year,result);
	

	
	return 0;
}
