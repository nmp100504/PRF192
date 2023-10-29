#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int score;
	char rank;
	
	printf("Enter the student's score: ");
	scanf("%d", &score);
	
	if (score >= 90){
		rank = 'A';
	} else if (score >= 80){
		rank = 'B';
	} else if (score >= 70){
		rank = 'C';
	} else if (score >= 60){
		rank = 'D';
	} else {
		rank = 'E';
	}
	
	printf("Your rank is: %c", rank);
	return 0;
}
