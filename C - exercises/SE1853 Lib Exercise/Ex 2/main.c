#include <stdio.h>
#include <math.h>

void quadratic_equation(float a, float b, float c) {
    float delta, x1, x2;
    
    delta = b * b - 4 * a * c;
    
    if (delta > 0) 
	{
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("The equation has two distinct real roots: %.2f and %.2f\n", x1, x2);
    } 
	else if (delta == 0) 
	{
        x1 = -b / (2 * a);
        printf("The equation has one root: %.2f\n", x1);
    } 
	else 
	{
        printf("No solution.\n");
    }
}

void bank_deposit(float deposit, float rate, int months) {
    int i;
    float interest, total;
    
    interest = 0;
    total = deposit;
    
    for (i = 1; i <= months; i++) {
        interest = total * rate;
        total += interest;
    }
    
    printf("After %d months, your deposit of %.2f with a monthly rate of %.2f will yield a total of %.2f\n", months, deposit, rate, total);
}

int main() {
    int choice, months;
    float a, b, c, deposit, rate;
    int flag;

    do {
        printf("1- Quadratic equation\n");
        printf("2- Bank deposit problem\n");
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

        switch (choice) {
            case 1:
                printf("Please enter the coefficients a, b, c: ");
                scanf("%f %f %f", &a, &b, &c);
                quadratic_equation(a, b, c);
                break;
                
            case 2:
                printf("Please enter your deposit, monthly rate (<= 0.1), and number of months: ");
                scanf("%f %f %d", &deposit, &rate, &months);
                bank_deposit(deposit, rate, months);
                break;
                
            case 3:
                break;

            default:
                printf("Invalid choice.\n");
                break;
        }
    } 
	while (choice != 3);

    return 0;
}




