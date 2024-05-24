#include<stdio.h>

main()
{
	const float pi =3.14 ;
	float r, are;
	
	printf("enter your value of r =");
	scanf("%f",&r);
	
	are = pi * pi * r;
	printf("Are = %.2f", are);
}