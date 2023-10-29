#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char line[100];
	int a, b, c, d, e;
	FILE *input_file = fopen("input.txt", "r");
	FILE *output_file = fopen ("output.txt", "w"); // mo file o che do ghi
	if (input_file == NULL || output_file == NULL){
		printf("Cannot open file input.txt\n");
		return 1;
	}
	
	while (fgets(line, sizeof(line), input_file)){
		if(sscanf(line,"%d %d %d %d %d", &a, &b, &c, &d, &e) == 5) {
			float x1, y1, x2, y2, distance;
			x1 = a;
			y1 = b;
			x2 = d;
			y2 = e;
			distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
			if (distance < c)
				fprintf(output_file,"%d %d %d %d %d %d\n", a, b, c, d, e, -1);
			else if (distance == c)
				fprintf(output_file,"%d %d %d %d %d %d\n", a, b, c, d, e, 0);
			else
				fprintf(output_file,"%d %d %d %d %d %d\n", a, b, c, d, e, 1);
		}
	}
	fclose(input_file);
	fclose(output_file);
	return 0;
}
