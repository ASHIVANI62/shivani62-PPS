#include<stdio.h>
int main()
{
	int number,flippedNUMBER;
	printf("Enter any number: ");
	scanf("%d",&number);
	flippedNUMBER=~number;
	printf("Original number = %d\n,number");
	printf("Number after bits are flipped = %d", flippedNUMBER);
	
	return 0;
}
