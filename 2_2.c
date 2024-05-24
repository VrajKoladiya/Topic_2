#include<stdio.h>

main()
{
const float pi =3.14;
	float r,area;
	
	printf("enter your value r =");
	scanf("%f",&r);
	
	area = pi * r * r;
	printf("Area = %.2f\n\n",area);
		float l,a;
	printf("enter your value l =");
	scanf("%f",&l);
	
	a =l * l;
	printf("Area =%.2f",a);
}