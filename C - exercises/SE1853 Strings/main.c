//#include <stdio.h>
//#include <ctype.h>
//#include <stdlib.h>
//
//int main() {
//    char *input, *output;
//    int i = 0, j = 0;
//
//    // Allocate memory for input string
//    input = (char*) malloc(1000 * sizeof(char));
//
//    // Read input string
//    printf("Enter a string: ");
//    fgets(input, 1000, stdin);
//
//    // Allocate memory for output string
//    output = (char*) malloc(1000 * sizeof(char));
//
//    // Copy input string to output string
//    while (input[i] != '\0') {
//        output[i] = input[i];
//        i++;
//    }
//    output[i] = '\0';
//
//    // Capitalize each word in output string
//    i = 0;
//    while (output[i] != '\0') {
//        if (i == 0 || output[i-1] == ' ') {
//            output[i] = toupper(output[i]);
//        }
//        i++;
//}printf("Capitalized string: %s", output);free(input);free(output);
//    return 0;
//}
////
////How to accept blanks in a input string?
////%[^\n] conversion specifier 
////
////reads all characters until the newline ('\n'), 
////stores the characters read in memory locations starting with the address passed to scanf, 
////stores the null byte in the byte following that where scanf stored the last character and 
////leaves the delimiting character (here, '\n') in the input buffer.  


#include <stdio.h>
#include <string.h>


char* lTrim (char s[])
{
	int i = 0;
	while (s[i] == ' ') i++;
	if ( i > 0 ) strcpy (&s[0], &s[i]);
	return s;
}

char* rTrim (char s[])
{
	int i =  strlen(s) - 1;
	while (s[i] == ' ') i--;
	s[i+1] = '\0';
	return s;
}

char* trim (char s[])
{
	rTrim(lTrim(s));
	char *ptr = strstr(s, "  ");
	while (ptr !=NULL)
	{
		strcpy( ptr, ptr+1);
		ptr = strstr(s, "  ");
	}
	return s;
}

char* nameStr(char s[])
{
	trim(s);
	strlwr(s);
	int L = strlen(s);
	int i;
	for (i = 0; i < L; i++)
		if (i == 0 || ( i > 0 && s[i-1] ==' ')) s[i] = toupper (s[i]);
	return s;
}


int main() {
//    char str1[] = "Hello";
//    char str2[] = "World";
//    char str3[11];
//    int len;
//    int cmp;
//    char* ptr;
//
//    // strlen - get length of a string
//    len = strlen(str1);
//    printf("Length of '%s' is %d\n", str1, len);
//
//    // strcpy - copy one string to another
//    strcpy(str3, str1);
//    printf("str3 after copying str1: %s\n", str3);
//
//    // strcmp - compare two strings
//    cmp = strcmp(str1, str2);
//    if (cmp < 0) {
//        printf("'%s' comes before '%s'\n", str1, str2);
//    } else if (cmp == 0) {
//        printf("'%s' and '%s' are the same\n", str1, str2);
//    } else {
//        printf("'%s' comes after '%s'\n", str1, str2);
//    }
//
//    // strcat - concatenate two strings
//    strcat(str3, str2);
//    printf("str3 after concatenation: %s\n", str3);
//
//    // strupr - convert a string to uppercase
//    printf("str1 in uppercase: %s\n", strupr(str1));
//
//    // strstr - find a substring in a string
//    ptr = strstr(str3, "or");
//    if (ptr == NULL) {
//        printf("Substring 'or' not found in '%s'\n", str3);
//    } else {
//        printf("Substring 'or' found in '%s' at index %ld\n", str3, ptr - str3);
//    }
//
//    return 0;
	char s[21];
	printf("Enter string s1:");
	gets(s);
	trim(s);
	printf("After extra blanks are remove:");
	puts(s);
	nameStr(s);
	printf("After conert it to a name:");
	puts(s);
	getchar();
	return 0;
}



//Initialize a string: NULL byte is automatically inserted.
//char name[31] = “I am a student”;
//char name2[31] = {‘H’, ‘e ‘, ‘l’, ‘l’, ‘o’, ‘\0’ };
//Dynamic strings: Stored in the heap
//char* S;
//S = (char*) malloc( lengthOfString+1);
//      S = (char*) calloc( lengthOfString+1, sizeof(char));


