#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define nMAX 1000
int main(int argc, char *argv[]) {
	int n, i, j;
	scanf("%d", &n);
	int arr[nMAX];
	for(i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	int target;
	scanf("%d", &target);
	for(i = 0; i < n-1; i++)
		for(j = i; j < n; j++)
			if(arr[i] + arr[j] == target)
			{
				printf("%d\n%d", i, j);
				return 0;
			}
}
