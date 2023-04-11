#include<stdio.h>
#include<conio.h>
int main()
{
	int num,sum=0,firstdigit,lastdigit;
	
	printf("enter any number to find sum of first and last digit\n");
	scanf("%d",&num);
	
	lastdigit=num%10;
	
	firstdigit=num;
	
	while(num>=10)
	{
		num=num/10;
	}
	firstdigit=num;
	
	sum=firstdigit+lastdigit;
	
	printf("sum of first and last digit= %d",sum);
	
	return 0;
}
