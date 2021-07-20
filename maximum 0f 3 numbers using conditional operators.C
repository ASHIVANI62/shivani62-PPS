#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("\nEnter 3 numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>b&&a>c?a:b>c?b:c);
	printf("\nMaximum number among 3 is: %d",max);
	return 1;
}
