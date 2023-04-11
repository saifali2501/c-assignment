#include<stdio.h>

int main()
{
	int a,b,c;
	printf("enter the number");
	scanf("%d",&a);
	printf("enter the number");
	scanf("%d",&b);
	printf("enter the furmula case");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
		c=a+b;
		printf("%d",&c);
		break;
		
		case 2:
		c=a-b;
		printf("%d",c);
			break;
		
		case 3:
		c=a*b;
		printf("%d",c);
		break;
		
		case 4:
			c=a/b;
			printf("%d",c);
			break;
			
			default:
				printf("%d"invld);
				break;
			
	
	}
	   
	
	return 0;
}
