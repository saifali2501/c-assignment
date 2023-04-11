#include<stdio.h>

int main()
{
	printf("find factors\n");
	int num,i;
	printf("enter the number to find the factors of:- ");
	scanf("%d",&num);
	printf("\n\n\n factars of %d are \n",num);
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
		printf("%d\n",i);
	}
	
	return 0;
}
