




#include<stdio.h>

int main()
{
	int p,r,t,si;
	printf("principal amount:-");
	scanf("%d",&p);
	printf("rate of interest:-");
	scanf("%d",&r);
	printf("time span:-");
	scanf("%d",&t);
	
	si=p*r*t/100;
	printf("si=p*r*t/100\n%d",si);
	
	
	
	return 0;
}
