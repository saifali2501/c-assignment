#include<stdio.h>

int main()
{
	int num,squre,cube;
	
	//taking input
	printf("enter the value num ");
	scanf("%d",&num);
	
	//find squre
	squre=num*num;
	
	//find cube
	cube=num*num*num;
	
	printf("squre of %d is:%d\n",num, squre);
	printf("cube of %d is:%d",num, cube);
	

	return 0;
}
