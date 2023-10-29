#include <stdio.h>
#include <math.h>

int convertDecimalToInt(double x)
{
    const double TOLERANCE = 1e-9;
    int i = 0;
    while (fabs(x - round(x)) > TOLERANCE && i < 20)
    {
        x *= 10;
        i++;
    }
    return (int)round(x);
}

int digitSum(int num)
{
    num = abs(num);
    int res = 0;
    while(num != 0)
    {
        res += num % 10;
        num /= 10;
    }
    return res;
}

int main()
{
    double num;
    printf("Enter a real number: ");
    if (scanf("%lf", &num) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }
    int numInt = (int)num;
    double numDecimal = num - numInt;
    int temp = convertDecimalToInt(numDecimal);
    printf("Sum of digits of %d is %d\n", temp, digitSum(temp) + digitSum(numInt));
    return 0;
}

