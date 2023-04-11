#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,f;
	f=i=1;
	printf("enter the number ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		f*=i;
		i++;
	
}
	
	printf("factorial numuer of %d is %d:-",n,f);

	getch();
	return 0;
}
