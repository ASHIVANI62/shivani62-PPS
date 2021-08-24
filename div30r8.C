#include<stdio.h>
int main()
{
	int num;
	printf("\n Enter Number :");
	scanf("%d",&num);
	switch(num)
	{
		case 1:printf("\n The number is 1");
		       printf("\n Hello");
		       
		case 2:printf("\n The number is 2");
		       
		case 3:printf("\n The number is 3");
		       break;
		default:printf("\n The num is not 1,2,3");
		
	}
	return 1;
	   
}
