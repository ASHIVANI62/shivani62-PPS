#include<stdio.h>
int main()
{
	int num;
	printf("Enter an integer\n");
	scanf("%d",&num);
	
	num%2==0?printf("Even number\n"):printf("Odd number\n");
	
	return 0;
}
