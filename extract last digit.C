#include<stdio.h>
int main()
{
	int num,lastdigit;
	printf("Enter number: ");
	scanf("%d",&num);
	lastdigit = num%10;
	printf("lastdigit=%d",lastdigit);
	
	return 0;
}
