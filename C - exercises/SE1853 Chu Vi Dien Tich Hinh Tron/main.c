//#include <stdio.h>
//
//int main() {
//    long double num, decimal;
//    int sum = 0, intDecimal;
//
//    printf("Enter a real number: ");
//    scanf("%lf", &num);
//	int numInt = (int)num;
//	long double numDecimal = num - numInt;
//	
//	
//	while(numInt !=0)
//	{
//		sum += numInt%10;
//		numInt /= 10;
//	}
//	
//	while(numDecimal != (int)numDecimal)
//	{
//		sum += (int)(10*numDecimal) % 10;
//		numDecimal = 10*numDecimal - (int)10*numDecimal;
//	}
//	printf("%d", sum);
//}
#include <stdio.h>

int main() {
    long double num;
    scanf("%Lf", &num);
    printf("%Lf %d", num, (int) num);

    return 0;
}


