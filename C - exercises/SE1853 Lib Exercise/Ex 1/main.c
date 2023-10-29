#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int is_valid_date(int day, int month, int year) {
    if (month < 1 || month > 12) 
	{
        return 0;
    }
    
    if (day < 1 || day > 31) 
	{
        return 0;
    }
    
    if (month == 4 || month == 6 || month == 9 || month == 11) 
	{
        if (day > 30) 
		{
            return 0;
        }
    } 
	else if (month == 2) 
	{
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) 
		{
           	if (day > 29) 
			{
            return 0;
        	}
        } 
		else 
		{
        	if (day > 28) 
			{
            	return 0;
        	}
      	}
    }
    
    return 1;
}

void print_ascii_code(char c1, char c2) {
    int i;
    if (c1 > c2) 
	{
        char tmp = c1;
        c1 = c2;
        c2 = tmp;
    }
    
    for (i = c2; i >= c1; i--) 
	{
        printf("%c: %d, %xh\n", i, i, i);
    }
}

int main(int argc, char *argv[]) {
	int choice = 0, day, month, year, flag;
	char c1, c2;
	do {
        printf("1- Processing date data\n");
        printf("2- Character data\n");
        printf("3- Quit\n");
        printf("Choose an operation: ");
        flag = scanf("%d", &choice);

        if (flag != 1) {
            // Input was not an integer
            printf("Invalid input. Please enter an integer.\n");
            // Clear input buffer
            scanf("%*[^\n]");
            continue; // Repeat the loop
        }
        switch(choice)
    	{
			case 1:
	            printf("Please enter date data (dd/mm/yyyy): ");
	        	scanf("%d/%d/%d", &day, &month, &year);
	        	if (is_valid_date(day, month, year)) 
				{
	            	printf("Valid date\n");
	            } 
				else
				{
	                printf("Invalid date\n");
	            }
	            break;
			case 2:
				printf("Please enter 2 characters: ");
				scanf(" %c %c", &c1, &c2);
				print_ascii_code(c1,c2);
				break;
			default:
				printf("Invalid choice\n");
		}
	}
	while (choice != 3);
	return 0;
}
