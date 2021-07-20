#include<stdio.h>
int main()
{
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	if((num%3==0)&&(num%5==0))
	{
		printf("Number is divisible by 3 and 5");
	}
	return 0;
}
