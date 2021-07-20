#include<stdio.h>
int main()
{
	int a,b,c,d,max;
	printf("\nEnter 4 nmbers: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	max=(a>b&&a>c&&a>d?a:b>c&&b>d?b:c>d?c:d);
	printf("\nThe maximum number among 4 is: %d",max);
	return 1;
}
