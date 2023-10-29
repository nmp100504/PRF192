#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //

int main() {
    int count_a = 0, count_e = 0, count_i = 0, count_o = 0, count_u = 0;
    printf("Chuong trinh thong ke cac nguyen am a,e,i,o,u\n");
    char* str = calloc(1, sizeof(char)); // tao mang dong
    char t; // bien de kiem tra gia tri nhap vao
    int len = 0;
    char choice = 'y';
    int flag = 1;
    while (flag) {
    	printf("Moi ban nhap vao mot cau:");
        while (scanf("%c",&t) == 1) {
            if (t == '\n') break; // neu nguoi dung bam enter thi danh dau het string
            if (tolower(t) == 'a') {
                count_a++;
            }
            else if (tolower(t) == 'e') {
                count_e++;
            }
            else if (tolower(t) == 'i') {
                count_i++;
            }
            else if (tolower(t) == 'o') {
                count_o++;
            }
            else if (tolower(t) == 'u') {
                count_u++;
            }   
            len++;
        }
        str = realloc(str, len + 1); //dieu chinh lai kich thuoc mang dong = realloc sau khi da co do dai cua cau
        *(str + len) = '\0';
        printf("Thong ke: a(%d), e(%d), i(%d), o(%d), u(%d)\n", count_a, count_e, count_i, count_o, count_u);
        printf("Ban co muon tiep tuc hay khong (Y|N)?");
        scanf(" %c", &choice); 
        if (tolower(choice) == 'n') {
            flag = 0;
        }
    }
    free(str); 
    printf("Thong ke tong hop: a(%d), e(%d), i(%d), o(%d), u(%d)\n", count_a, count_e, count_i, count_o, count_u);
    return 0;
}

