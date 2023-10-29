#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int var1 = 5;
	int *var2;
	var2 = &var1;
	printf("%p\n", var2);
	printf("%p\n", &var2);
	printf("%d\n", *var2);
}
