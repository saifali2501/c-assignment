//find max number using ternary operator
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the value of a:-");
	scanf("%d",&a);
	printf("Enter the value of b:-");
	scanf("%d",&b);
	printf("Enter the value of c:-");
	scanf("%d",&c);
	
	d=a>b? (a>c?a:c) : (b>c?b:c);
	
	printf("max number is:-%d",d);
	
	
	return 0;
}
