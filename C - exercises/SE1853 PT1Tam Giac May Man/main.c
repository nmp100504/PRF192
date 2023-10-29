#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */




int main() {
	printf("Chuong trinh kiem tra 3 canh tam giac\n");
	
	long long int temp_input; // bien kiem tra qua trinh nhap co phai so hay khong
	long long int x1,x2,x3; //3 bien luu 3 canh tam giac
	long long int temp_check_sum = 0; // Bien tinh tong cac chu so cua 3 canh de kiem tra tam giac may man
	
	printf("Vui long nhap vao 3 so thuc: ");
	temp_input = scanf("%lld %lld %lld", &x1, &x2, &x3);
	//Kiem tra xem nguoi dung nhap vao 3 so thuc 
	if (temp_input != 3){
		printf("Cac so ban vua nhap khong hop le");
		return 0;
	}
	// Kiem tra xem nguoi dung nhap vao 3 so lon hon 0
	if ( x1 < 0 || x2 < 0 || x3 <0){
		printf("Cac so ban vua nhap khong hop le");
		return 0;
	}
	
	// Kiem tra 3 canh tam giac bang cach tinh tong 2 canh so voi canh con lai 
	if ( x1 + x2 <= x3 || x1 + x3 <= x2 || x2+ x3 <= x1){
		printf("KHONG THOA MAN\n");
		printf("%lld, %lld, %lld", x1,x2,x3);
		return 0;
	}
	
	// Sap xep lai 3 so in ra man hinh
	printf("THOA MAN 3 CANH TAM GIAC\n");
	if ( x1 > x2 && x1 > x3)
	{
		if( x2 > x3)
		{
			printf("%lld, %lld, %lld\n", x3,x2,x1);
		}
		else 
		{
			printf("%lld, %lld, %lld\n", x2,x3,x1);
		}
	}
	
	else if ( x2 > x1 && x2 > x3)
	{
		if( x1 > x3)
		{
			printf("%lld, %lld, %lld\n", x3,x1,x2);
		}
		else 
		{
			printf("%lld, %lld, %lld\n", x1,x3,x2);
		}
	}

	
	else
	{
		if( x1 > x2)
		{
			printf("%lld, %lld, %lld\n", x2,x1,x3);
		}
		else 
		{
			printf("%lld, %lld, %lld\n", x1,x2,x3);
		}
	}
	
	// Tinh tong cac chu so cua so thu nhat
	while ( x1 != 0){
		temp_check_sum += x1 %10; // Cong vao chu so ngoai cung ben phai 
		x1 /= 10; // Di chuyen sang phai den chu so tiep theo cua so duoc chon
	}

	// Tinh tong cac chu so cua so thu hai
	while ( x2 != 0){
		temp_check_sum += x2 %10; // Cong vao chu so ngoai cung ben phai 
		x2 /= 10; // Di chuyen sang phai den chu so tiep theo cua so duoc chon
	}
	
	// Tinh tong cac chu so cua so thu ba
	while ( x3 != 0){
		temp_check_sum += x3 %10; // Cong vao chu so ngoai cung ben phai 
		x3 /= 10; // Di chuyen sang phai den chu so tiep theo cua so duoc chon
	}
	
	if ( temp_check_sum % 10 == 0)
	{
		printf("TAM GIAC MAY MAN");
	}
	return 0;
}
