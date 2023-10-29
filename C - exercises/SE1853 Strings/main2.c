#include <stdio.h>
#include <string.h>

int main () {
   int len;
   const char str1[] = "ABCDEFG019874";
   const char str2[] = "ABC";

   len = strspn(str1, str2);

   printf("Length of initial segment matching %d\n", len );
   
   return(0);
}

#include <stdio.h>
#include <string.h>

int main () {
   int len;
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}

#include <stdio.h>
#include <string.h>

int main () {
   const char str1[] = "abcde2fghi3jk4l";
   const char str2[] = "34";
   char *ret;

   ret = strpbrk(str1, str2);
   if(ret) {
      printf("First matching character: %c\n", *ret);
   } else {
      printf("Character not found");
   }
   
   return(0);
}
#include <stdio.h>
#include <string.h>


int main () {
   const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "Point";
   char *ret;

   ret = strstr(haystack, needle);

   printf("The substring is: %s\n", ret);
   
   return(0);
}

#include <string.h>
#include <stdio.h>

int main () {
   char str[80] = "This is - www.tutorialspoint.com - website";
   const char s[2] = "-";
   char *token;
   
   /* get the first token */
   token = strtok(str, s);
   
   /* walk through other tokens */
   while( token != NULL ) {
      printf( " %s\n", token );
    
      token = strtok(NULL, s);
   }
   
   return(0);
}


#include <stdio.h>
#include <string.h>

int main () {
   char dest[20];
   char src[20];
   int len;

   strcpy(src, "Tutorials Point");
   len = strxfrm(dest, src, 20);

   printf("Length of string |%s| is: |%d|", dest, len);
   
   return(0);
}


#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}
