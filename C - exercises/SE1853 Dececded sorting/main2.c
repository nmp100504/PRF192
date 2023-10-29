#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void sort(int arr[], int n)
{
	int i,j;
	for(i = 0; i < n -1 ; i ++)
		for(j = i; j < n; j++)
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
}

#define nMAX 1000
int main(int argc, char *argv[]) {
	int n, i, j;
	scanf("%d", &n);
	int arr[nMAX];
	for(i = 0;i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	sort(arr, n);
	for(i = 0; i < n; i++)
	{
		if(arr[i] % 2 == 0){
			printf("%d ", arr[i]);
		}
	}
	for(i = 0; i < n; i++)
	{
		if(arr[i] % 2 == 1){
			printf("%d ", arr[i]);
		}
	}
}
