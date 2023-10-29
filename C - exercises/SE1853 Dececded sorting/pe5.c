#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	int i,j;
	scanf("%d", &n);
	for(i = 0; i < n;i++){
		for(j = 1; j <=i; j++)
			printf("%d", j);
		for(; j >=1;j--)
			printf("%d", j);
		printf("\n");		
	}
	return 0;
}
