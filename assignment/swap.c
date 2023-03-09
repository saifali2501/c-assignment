#include<stdio.h>

int main()
{
	int a,b;
	printf("enter the value number: a");
	scanf("%d",&a);
	printf("enter the value number: b");
	scanf("%d",&b);
	printf("a=%d, b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
		
	printf("\nNow, a= %d b= %d",a,b);
	
	
	return 0;
}
