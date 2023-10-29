#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
	system("cls");
	
	long int a, b;
	scanf("%ld %ld", &a, &b);
	
	
	printf("\nOUTPUT:\n");
	if( a >= b)
	{
		printf("a>=b");
	}
	else{
		printf("a<b");
	}
	
	printf("\n");
	system("pause");
	return(0);
}
