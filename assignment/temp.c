#include<stdio.h>

int main()
{
  float celsius,fahrenheit;
  
  printf("enter the temarature in celsius\n");
  scanf("%f",&celsius);
  
  fahrenheit=(celsius*9/5)+32;
  
  printf("\n fahrenheit=(celsius*9/5)+32= %f",fahrenheit);
	
	return 0;
}
