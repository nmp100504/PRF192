#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
    	return 1;
    } else {
        return 0;
    }
}


#define nMAX 1000
int main()
{
	int n, i;
	scanf("%d", &n);
	char arr[nMAX];
	
	for(i = 0; i < n; i++){
		scanf(" %c", &arr[i]);
	}
	int j  = 0;
	for(i = 0; i < n - 1; i ++)
		for(j = i +1; j < n; j++)
			if(arr[i] < arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
	for(i = 0; i < n; i++)
		if(isVowel(arr[i]) == 1)
		{
			printf("%c ", arr[i]);	
		}
	for(i = 0; i < n; i++)
		if(isVowel(arr[i]) == 0)
		{
			printf("%c ", arr[i]);	
		}
	printf("\n");	
}




