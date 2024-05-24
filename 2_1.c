#include<stdio.h>

main()
{
	int a,b;
	a = 12, b=6;
	printf("Addition of %d and %d is %d\n",a,b,a+b);
	printf("Subtraction of %d and %d is %d\n", a, b, a-b);
	printf("Multiplication of %d and %d is %d\n", a, b, a*b);
	printf("Division of %d and %d is %d\n", a, b, a/b);
	printf("Modulo of %d and %d is %d\n\n", a, b, a%b);
	printf("%d + %d = %d\n", a, b, a+b);
	printf("%d - %d = %d\n", a, b, a-b);
	printf("%d * %d = %d\n", a, b, a*b);
	printf("%d / %d = %d\n", a, b, a/b);
	printf("%d %% %d = %d\n\n", a, b, a%b);
	a=5;
	printf("---------\n");
	printf("|\t|\n");
	printf("|%d*%d=%d |\n", a, a, a*a);
	printf("|\t|\n");
	printf("---------");
}
