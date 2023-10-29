#include <ctype.h>
#include <stdlib.h>
char* toUpperCase(const char *str) { //chuoi hang so, khong thay doi ma chi doc
 //chuyen chuoi str thanh dang chu hoa
 //vi du: Input "This is an example of string."
 //Output "THIS IS AN EXAMPLE OF STRING."
 //hom truoc trong phan thu viec ctype.h
 //ta co ham toupper()
 // Allocate a new string to hold the modified string
    char *newstr = malloc(strlen(str) + 1);
    if (newstr == NULL) {
        return NULL;
    }
 int i=0;
 while(str[i]) {
 //printf("Position %d has value %c\n", i, str[i]);
 newstr[i] = (char)toupper(str[i]);
 i++;
 }
 newstr[i] = '\0'; // Don't forget to add the NULL byte to the end of string
 return newstr;
}
char* toLowerCase(const char *str) {}
char** splitString(char* str, const char* delim, int* count) {
    char** result = NULL;
    char* token = strtok(str, delim);
    *count = 0;
    while (token != NULL) {
        result = (char**)realloc(result, (*count + 1) * sizeof(char*));
        result[*count] = token;
        (*count)++;
        token = strtok(NULL, delim);
    }
    return result;
}
char* capitalizeFirstChar(const char *str) {
 //Input: ha
 //output: Ha
 //ham dung de viet hoa chu cai dau cua chuoi str truyen vao
 // Allocate a new string to hold the modified string
    char *newstr = malloc(strlen(str) + 1);
    if (newstr == NULL) {
        return NULL;
    }
 int i=0;
 newstr[i] = (char)toupper(str[i]);
 i++;
 while(str[i]) {
 //printf("Position %d has value %c\n", i, str[i]);
 newstr[i] = str[i];
 i++;
 }
 newstr[i] = '\0'; // Don't forget to add the NULL byte to the end of string
 return newstr;
}
char* capitalizeEachWord(const char *str) {
 //Input: this is an example of string.
 //Output: This Is An Example Of String.
 //goi y phai xu ly nhung van de sau
 //tach 1 chuoi thanh cac tu: arrWords
 //sau do voi moi tu thi lay ki tu dau tien va bien thanh chu hoa
 //roi lai ket hop lai
 int count; //bien dem so tu
 char** arrWords = splitString(str, " .#\t", &count);
 int i;
 for (i = 0; i < count; i++) {
        printf("Word[%d] = %s\n", i, arrWords[i]);
        arrWords[i] = capitalizeFirstChar(arrWords[i]);
        printf("%s\n", arrWords[i]);
    }
    free(arrWords);
}
char* reverseEachWord(const char* str) {
    // Allocate a buffer to hold the reversed string
    char* result = (char*) malloc(strlen(str) + 1);
    if (result == NULL) {
        fprintf(stderr, "Error: Unable to allocate memory.\n");
        return NULL;
    }
    
    // Initialize variables to keep track of the current word and its length
    const char* word_start = str;
    size_t word_length = 0;
    
    // Loop over the input string, reversing each word
    for (const char* p = str; *p != '\0'; p++) {
        if (*p == ' ' || *(p+1) == '\0') {
            // End of word detected, reverse it
            for (size_t i = 0; i < word_length; i++) {
                result[word_start - str + i] = word_start[word_length - i - 1];
            }
            
            // Copy the space or null terminator after the word
            result[word_start - str + word_length] = *p;
            
            // Reset variables for the next word
            word_start = p + 1;
            word_length = 0;
        } else {
            // Still in the middle of a word, update its length
            word_length++;
        }
    }
    
    // Add null terminator to end of reversed string
    result[strlen(str)] = '\0';
    
    return result;
}


char* reverseString(const char* str) {
 //dao nguoc chuoi dau vao
 //Input: hanoi mua thu
 //Output: uht aum ionah
    // Allocate a buffer to hold the reversed string
    char* result = (char*) malloc(strlen(str) + 1);
    if (result == NULL) {
        fprintf(stderr, "Error: Unable to allocate memory.\n");
        return NULL;
    }
    
    // Initialize variables to keep track of the current word and its length
    const char* word_start = str;
    size_t word_length = 0;
    
    // Loop over the input string in reverse order, copying each word to the output buffer
    for (const char* p = str + strlen(str) - 1; p >= str; p--) {
        if (*p == ' ' || p == str - 1) {
            // End of word detected, copy it to the output buffer
            const char* word_end = word_start + word_length;
            for (const char* q = word_start; q < word_end; q++) {
                *result++ = *(q + (str - word_start - word_length - 1));
            }
            
            // Copy the space or null terminator after the word
            if (p != str - 1) {
                *result++ = *p;
            }
            
            // Reset variables for the next word
            word_start = p + 1;
            word_length = 0;
        } else {
            // Still in the middle of a word, update its length
            word_length++;
        }
    }
    
    // Add null terminator to end of reversed string
    *result = '\0';
    
    return result - strlen(str);
}
int biggestNumberInStr(const char* str) {
 //tra ve so lon nhat trong chuoi dau vao
 //Input: a385b78 120a b105.3
 //Output: 385
    int max_num = INT_MIN;  // initialize the maximum number found to the smallest possible integer value
    int curr_num = 0;       // initialize the current number being parsed to zero

    // iterate over each character in the string
    for (const char* p = str; *p != '\0'; p++) {
        // check if the current character is a digit
        if (isdigit(*p)) {
            // if so, add its value to the current number being parsed
            curr_num = curr_num * 10 + (*p - '0');
        } else {
            // if not, check if the current number being parsed is bigger than the current maximum
            if (curr_num > max_num) {
                max_num = curr_num;
            }
            curr_num = 0;  // reset the current number being parsed
        }
    }

    // check if the last number in the string is bigger than the current maximum
    if (curr_num > max_num) {
        max_num = curr_num;
    }

    return max_num;
}
int checkValidEmail(const char* str) {
 //tra ve str truyen vao co phai la mot dia chi email hop le hay khong
 //Input1: anhbn@fpt.edu.vn
 //Output1: 1 (valid)
 //Input2: anhbnfpt.edu.vn
 //Output2: 0 (invalid)
 //Input3: anhbn@fpteduvn
 //Output3: 0 (invalid)
 //Input4: anhbn.fpt@fpteduvn
 //Output4: 0 (invalid)
    int at_found = 0;
    int last_dot = -1;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] == '@') {
            if (at_found) {
                return 0;  // More than one '@' found
            } else {
                at_found = 1;
            }
        } else if (str[i] == '.') {
            if (at_found) {
                last_dot = i;
            } else {
                return 0;  // Dot found before '@'
            }
        }
    }

    if (last_dot == -1) {
        return 0;  // No dot found in the domain name part
    }

    // Check if there are at least two characters after the last dot
    int chars_after_last_dot = len - last_dot - 1;
    if (chars_after_last_dot < 2) {
        return 0;
    }

    return 1;
}
