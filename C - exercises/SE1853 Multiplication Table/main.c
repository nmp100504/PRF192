//#include <stdio.h>
//#include <stdlib.h>
//
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//
//int main(int argc, char *argv[]) {
//	int low,high;
//	int i,j;
//	printf("Enter the low end of range: ");
//	scanf("%d", &low);
//	printf("Enter the high end of range: ");
//	printf("\n");
//	scanf("%d", &high);
//	printf("\t");
//	for(i = low; i < high + 1; i++){
//		printf("\t%2d", i);
//	}
//	printf("\n");
//	for(i = low; i < high + 1; i++){
//		printf("\t%2d",i);
//		for (j = low; j < high + 1; j++ ){
//			printf("\t%2d", i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


/* stdlib_demo.c */
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{   int i; int a=5, b=50;
//    double x=3.5, y= 20.8;
//    printf("10 Hardware random integers:\n");
//    for (i=0;i<10; i++) printf("%d ", rand());
//    /*Init randomise using system time-miliseconds
//        Each time the program executes, the system time changes.
//        So, random sequence changes
//    */
//     srand(time(NULL)); 
//     printf("\n\n10 Software random integers:\n");
//     for (i=0;i<10; i++) printf("%d ", rand());
//     printf("\n\n10 random integers between:%d...%d\n", a, b);
//     for (i=0;i<10; i++) printf("%d ", a + rand()% (b-a));
//     printf("\n\n5 random double between:%lf...%lf\n", x, y);
//     for (i=0;i<5; i++) printf("%lf ", x + (double)rand()/RAND_MAX*(y-x));
//     getchar();   
//}

///* stdlib_demo.c */
///* Evaluate time cost of 1000000000 mathematic operations */
//#include <stdio.h>
//#include <time.h>
//int main()
//{ int i; int n=1; double x=1.5;
//  /* Use time_t data type */
//  time_t t1 = time(NULL); /*Get current time */   for (i=0; i<1000000000;i++) x= x+1;
//  time_t t2 = time(NULL); /*Get current time */
//  double dt = difftime(t2,t1);
//  printf("\nCost of 1 billion real number adding operations: %lf sec\n", dt);
//  t1 = time(NULL); /*Get current time */    for (i=0; i<1000000000;i++) n= n+1;
//  t2 = time(NULL); /*Get current time */  dt = difftime(t2,t1);
//  printf("\nCost of 1 billion integral number adding operations: %lf sec\n", dt);
//  /* Use clock_t data type */ 
//  n=1;
//  clock_t ct1= clock(); /*Get current time */  for (i=0; i<1000000000;i++) n= n+1;
//  clock_t ct2= clock(); /*Get current time */
//  printf("\nCost of 1 billion integral number adding operations: %ld ticks\n", ct2-ct1);
//  printf("\nor %lf secs\n", ((double)(ct2-ct1)/CLOCKS_PER_SEC));
//  getchar();   
//}



///* math_demo.c */
//#include <stdio.h>
//#include <time.h>
//int main()
//{ double x= 15.3, y=-2.6;
//  printf("floor: %lf, %lf\n", floor(x), floor(y));
//  printf("ceil: %lf, %lf\n", ceil(x), ceil(y));
//  printf("round: %lf, %lf\n", round(x), round(y));
//  printf("trunc: %lf, %lf\n", trunc(x), trunc(y));
//  printf("sqrt: %lf\n", sqrt(x));
//  printf("pow- x^y : %lf\n", pow(x,y));
//  printf("exp- e^x: %lf\n", exp(x));
//  printf("log(x): %lf\n", log(x));
//  printf("log2(x): %lf\n", log(x)/log(2));
//  getchar();   
//}

#include <stdio.h>
int main()
{  char c;
   printf("Input a character:");
   c = getchar();
   printf("Code inputted:%d\n", c);
   getchar();
}


