#include<stdio.h>
#include<conio.h>

int fact(int);
int main()
{
	int x,n;
	printf("enter the number to find factorial: ");
	scanf("%d",&n);
	
	x=fact(n);
	printf("factorial of %d is %d",n,x);
	
	return 0;
}
int fact(int n)
{
	if(n==0)
	return(1);
	
	return(n*fact(n-1));
	
}
