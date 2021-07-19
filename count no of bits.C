#include<stdio.h>
int main()
{
    int number;
	printf("Enter a number:\n");
	scanf("%d",&number);
	printf("number of bits in %d is %d",number,sizeof(number)*8);	
	return 0;
}
