#include<stdio.h>
int main()
{
	int number;
	printf("Enter number: ");
	scanf("%d",&number);
	printf("value of n after LSB is set is %d",number|1);
	return 0;
}
