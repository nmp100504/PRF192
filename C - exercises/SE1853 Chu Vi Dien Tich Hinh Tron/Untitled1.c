#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double r, perimeter, area;
	scanf("%lf", &r);
	const double pi = 3.1415;
	perimeter = 2*pi*r;
	area = pi*r*r;
	printf("%.3lf %.3lf", perimeter, area);

	return 0;
}
