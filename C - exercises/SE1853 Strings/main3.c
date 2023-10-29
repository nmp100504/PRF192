Q1.#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
system("cls");
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
double a,b;
scanf("%lf%lf",&a,&b);
// Fixed Do not edit anything here.
printf("\nOUTPUT:\n");
//@STUDENT: WRITE YOUR OUTPUT HERE:
printf("%.2lf",a/b);
//--FIXED PART - DO NOT EDIT ANY THINGS HERE
printf("\n");
system ("pause");
return(0);
}




Q2.#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
system("cls");
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
float a;
scanf("%f",&a);
// Fixed Do not edit anything here.
printf("\nOUTPUT:\n");
//@STUDENT: WRITE YOUR OUTPUT HERE:
if(a>=5 && a < 7.0) printf("Average rating with a score: %.1f", a);
else if(a>=7 && a < 8.0) printf("Good rating with a score: %.1f", a);
else if(a>=8 && a <= 10.0) printf("Excellent rating with a score: %.1f", a);
else{
printf("Bad rating with a score: %.1f", a);
}
//--FIXED PART - DO NOT EDIT ANY THINGS HERE
printf("\n");
system ("pause");
return(0);
}

Q3.#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
system("cls");
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int arr[5];
int i;
for(i = 0; i < 5;i++){
scanf("%d", &arr[i]);
};
// Fixed Do not edit anything here.
printf("\nOUTPUT:\n");
//@STUDENT: WRITE YOUR OUTPUT HERE:
int count1 =0;
int count2 =0;
for(i = 0; i < 5;i++){
if(arr[i] % 2 == 0) count1++;
else if(arr[i] % 2 != 0) count2++;
};
printf("%d\n%d", count1,count2);
//--FIXED PART - DO NOT EDIT ANY THINGS HERE
printf("\n");
system ("pause");
return(0);
}


Q5.#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
system("cls");
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n, i, j, temp;
scanf("%d", &n);
int array[n];
for (i = 0; i < n; i++) {
scanf("%d", &array[i]);
}
// separate odd and even numbers
int odds[n], evens[n], oddIndex = 0, evenIndex = 0;
for (i = 0; i < n; i++) {
if (array[i] % 2 == 1) {
odds[oddIndex] = array[i];
oddIndex++;
} else {
evens[evenIndex] = array[i];
evenIndex++;
}
}
// sort odd and even numbers separately
for (i = 0; i < oddIndex; i++) {
for (j = i + 1; j < oddIndex; j++) {
if (odds[i] > odds[j]) {
temp = odds[i];
odds[i] = odds[j];
odds[j] = temp;
}
}
}
for (i = 0; i < evenIndex; i++) {
for (j = i + 1; j < evenIndex; j++) {
if (evens[i] > evens[j]) {
temp = evens[i];
evens[i] = evens[j];
evens[j] = temp;
}
}
}
// merge odd and even numbers back into one array
int result[n], resultIndex = 0;
for (i = 0; i < evenIndex; i++) {
result[resultIndex] = evens[i];
resultIndex++;
}
for (i = 0; i < oddIndex; i++) {
result[resultIndex] = odds[i];
resultIndex++;
}
// Fixed Do not edit anything here.
printf("\nOUTPUT:\n");
//@STUDENT: WRITE YOUR OUTPUT HERE:
// print the sorted array
for (i = 0; i < n; i++) {
printf("%d ", result[i]);
}
//--FIXED PART - DO NOT EDIT ANY THINGS HERE
printf("\n");
system ("pause");
return(0);
}



Q6.#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define MAX_LENGTH 100
int main() {
system("cls");
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
char str[MAX_LENGTH + 1]; // Add 1 to include space for null terminator
int len;
// Input the string from the user
fgets(str, MAX_LENGTH + 1, stdin);
// Remove newline character from input string
len = strlen(str);
if (str[len - 1] == '\n') {
str[len - 1] = '\0';
}
// Convert uppercase letters to lowercase letters
int i;
for ( i = 0; i < len; i++) {
if (str[i] >= 'A' && str[i] <= 'Z') {
str[i] = str[i] + ('a' - 'A');
}
}
// Fixed Do not edit anything here.
printf("\nOUTPUT:\n");
//@STUDENT: WRITE YOUR OUTPUT HERE:
printf("%s\n", str);
//--FIXED PART - DO NOT EDIT ANY THINGS HERE
printf("\n");
system ("pause");
return(0);
}


Q7.#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
system("cls");
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n, result;
scanf("%d", &n);
int array[n];
int i;
for (i = 0; i < n; i++) {
scanf("%d", &array[i]);
}
scanf("%d",&result);
// Fixed Do not edit anything here.
printf("\nOUTPUT:\n");
//@STUDENT: WRITE YOUR OUTPUT HERE:
int j;
for ( i = 0; i < n; i++) {
for ( j = i + 1; j < n; j++) {
if (array[i] - array[j] == result) {
printf("%d %d\n", i, j);
break;
}
}
}
//--FIXED PART - DO NOT EDIT ANY THINGS HERE
printf("\n");
system ("pause");
return(0);
}


Q4.#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
system("cls");
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
#include <stdio.h>
int n;
scanf("%d", &n);
int i,j;
// Fixed Do not edit anything here.
printf("\nOUTPUT:\n");
//@STUDENT: WRITE YOUR OUTPUT HERE:
for ( i = 0; i < n; i++) {
for ( j = 0; j < n - i - 1; j++) {
printf("");
}
char c = 'A';
for ( j = 0; j <= i; j++) {
printf("%c", c++);
}
c -= 2;
for ( j = 0; j < i; j++) {
printf("%c", c--);
}
printf("\n");
}
//--FIXED PART - DO NOT EDIT ANY THINGS HERE
printf("\n");
system ("pause");
return(0);
}


Q8.#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
void swap(int a[], int n, int pos_max, int pos_min){
int i, j;
for (i = 0; i < n - 1; i++) {
for (j = i + 1; j < n; j++) {
if (i == pos_min && j == pos_max || i == pos_max && j == pos_min) {
int temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
}
}
int main() {
system("cls");
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n, i;
scanf("%d", &n);
int a[n];
int max_odd = -1e9, min_odd = 1e9;
int pos_max, pos_min;
for (i = 0; i < n; i++) {
scanf("%d", &a[i]);
}
for (i = 0; i < n; i++) {
if (a[i] % 2 == 1 && a[i] > max_odd){
max_odd = a[i];
pos_max = i;
}
if (a[i] % 2 == 1 && a[i] < min_odd){
min_odd = a[i];
pos_min = i;
}
}
swap(a, n, pos_max, pos_min);
// Fixed Do not edit anything here.
printf("\nOUTPUT:\n");
//@STUDENT: WRITE YOUR OUTPUT HERE:
for (i = 0; i < n; i++) {
printf("%d ", a[i]);
}
//--FIXED PART - DO NOT EDIT ANY THINGS HERE
printf("\n");
system ("pause");
return(0);
}


Q9.#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
system("cls");
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
char str[100];
fgets(str, sizeof(str), stdin);
int len = strlen(str);
if (len > 0 && str[len-1] == '\n') {
str[--len] = '\0';
}
int i;
for ( i = 0; i < len; i++) {
if (i == 0 || isspace(str[i-1])) {
str[i] = toupper(str[i]);
}
}
// Fixed Do not edit anything here.
printf("\nOUTPUT:\n");
//@STUDENT: WRITE YOUR OUTPUT HERE:
printf("%s\n", str);
//--FIXED PART - DO NOT EDIT ANY THINGS HERE
printf("\n");
system ("pause");
return(0);
}


Q10.#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
system("cls");
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n, originalNum, remainder, result = 0, count = 0;
float power;
scanf("%d", &n);
originalNum = n;
while (originalNum != 0) {
originalNum /= 10;
++count;
}
originalNum = n;
while (originalNum != 0) {
remainder = originalNum % 10;
power = pow(remainder, count);
result += power;
originalNum /= 10;
}
// Fixed Do not edit anything here.
printf("\nOUTPUT:\n");
//@STUDENT: WRITE YOUR OUTPUT HERE:
if (result == n)
printf("%d is armstrong number", n);
else
printf("%d is not an armstrong number", n);
//--FIXED PART - DO NOT EDIT ANY THINGS HERE
printf("\n");
system ("pause");
return(0);
}
