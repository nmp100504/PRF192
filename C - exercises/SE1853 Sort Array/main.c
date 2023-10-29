#include <stdio.h>
#include <stdlib.h>

void Sorting(int arr[], int n) {
	int i, j, temp;
	for (i = 0; i < n - 1; i++) { // vi tri phan tu dang so sanh 
		for ( j = i+1; j < n ; j++) {   // moi vong lap tim phan tu lon thu i + 1 de dua len vi tri i
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp; 
			}
		}
		// sau vong for nay phan tu thu i la phan tu da duoc sap xep o dung vi tri
	}
}

int main(int argc, char *argv[]) {
	int arr[1000], i, n;//khai bao mang ten la arr, bien i, bien n la so phan tu trong mang do nguoi dung nhap vao
	printf("Please input array's length: ");
	scanf("%d", &n);
	printf("Please input array's elements: ");
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	Sorting(arr, n);
	
	printf("Sorted array: ");
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}
