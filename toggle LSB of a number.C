#include<stdio.h>
int main()
{
	int number;
	printf("Enter number: ");
	scanf("%d",&number);
    if(number&1==0)
	printf("\n after toggling %d",number|1);
	else
	printf("\n After toggling %d",number^1);
	return 0;
}
