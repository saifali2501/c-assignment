//calcuculate sum of 5 subject&find the percentage//

#include<stdio.h>


int main()
{
	int s1,s2,s3,s4,s5,sum;
	float avg;
	printf("enter the marks of five subject:");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	
	sum=s1+s2+s3+s4+s5;
	avg=sum/5;
	printf("\n Total marks in 5 subject %d",sum);

	printf("\n percents of 5 subject %d",avg);
	
	
	
	return 0;
}


