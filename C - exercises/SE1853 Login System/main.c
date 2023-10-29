#include <stdio.h>
#include <conio.h> //thu vien de dung lenh getch

int main() {
    char username[30];
    char password[50];
    int i = 0;
    char c;

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    while ((c = getch()) != '\r') { //kiem tra xem nguoi dung co bam enter hay khong
        if (c == '\b' && i > 0) {
            // Neu nguoi dung bam backspace ma van con ki tu trong mat khau thi lui lai 1 ki tu va xoa ki tu gan nhat
            i--;// 
            password[i] = '\0'; 
        } else if (i < 50 - 1 && c != '\b') 
		{
            // Neu nhap vao mot ki tu thoa man khong phai nut enter hay backspace va 
            // thoa man do dai mat khau < 50 thi luu vao mang password
            password[i] = c;
            i++;
        }
    }
    password[i] = '\0';  // cu phap danh dau ket thuc string trong C la \0

	if (strcmp(username, "ADMIN") == 0 && strcmp(password, "123456") == 0) 
	// ham strcmp de so sanh gia tri 2 string, tra ve 0 neu bang nhau, tra ve 1 so khac neu khac nhau
	{
    printf("\nLOGIN SUCCESSFUL");
	} 
	else 
	{
	    printf("\nLOGIN FAILED");
	}
    return 0;
}

