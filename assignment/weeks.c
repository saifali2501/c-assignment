//monday to sunday using switch case
#include<stdio.h>
#include<conio.h>
int main(){
	int day;
	printf("Enter the number: ");
	scanf("%d",&day);
	
	switch(day){
		
		case 1:
			printf("monday");
			break;
		
		case 2:
			printf("tuesday");
			break;
		
		case 3:
			printf("wednesday");
			break;
		
		case 4:
			printf("thursday");
			break;
		
		case 5:
			printf("friday");
			break;
		
		case 6:
			printf("saturday");
			break;
		
		case 7:
			printf("sunday");
				break;
				
				default:
					printf("invalid number");
	}
	
	
	
	return 0;
	getch();
}
