#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    char line[100];
    int a, b, c;
    FILE *input_file = fopen("input.txt", "r");
    FILE *output_file = fopen ("output.txt", "w");
    if (input_file == NULL || output_file == NULL){
        printf("Cannot open file input.txt or output.txt\n");
        return 1;
    }
    
    while (fgets(line, sizeof(line), input_file)){
        if(sscanf(line,"%d, %d, %d", &a, &b, &c) == 3) {
            double x, y, z, delta;
            x = a;
            y = b;
            z = c;
            if(x == 0){
            	if(y ==  0)
            		fprintf(output_file, "No real solution\n");
            	else
            		fprintf(output_file, "%d %d %d %lf\n", a, b, c, -z / y);
			}
			else {
				delta = pow(y, 2) - 4 * x * z;
	            if (delta < 0) {
	                fprintf(output_file, "No real solution\n");
	            
				} else if (delta == 0) {
				    fprintf(output_file, "%d %d %d %lf\n", a, b, c, -y / (2 * x));
				} else {
				    fprintf(output_file, "%d %d %d %lf %lf\n", a, b, c, (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
				}
			}
        }
    }
    fclose(input_file);
    fclose(output_file);
    return 0;
}

