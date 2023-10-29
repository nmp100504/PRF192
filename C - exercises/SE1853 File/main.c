#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char filePath[] = "data.txt";
	FILE *p = fopen(filePath, "r");
	if (p == NULL){
		printf("Error: cannot open %s to read data\n", filePath );
		return 1; // co loi xay ra
	}
	
	int num1, num2, num3;
	fscanf(p, "%d %d %d", &num1, &num2, &num3);
	int sum = num1 + num2 + num3;
	printf("%d + %d + %d = %d\n", num1,num2,num3, sum);
	fclose(p);
	
	//ghi du lieu ra file
	strcpy(filePath, "o1.txt");
	FILE *p2 = fopen (filePath, "w"); // mo file o che do ghi
	fprintf(p2, "Sum of %d + %d + %d = %d\n", num1,num2,num3, sum);
	fclose(p2);
	printf("Write data to file %s is success\n", filePath);
	return 0;
}
