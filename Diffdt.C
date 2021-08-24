#include<stdio.h>
int main()
{
	int a=6,b=45;
	printf("Before   %d %d",a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	
	printf("After    %d  %d",a,b);
	return 1;
	
}
