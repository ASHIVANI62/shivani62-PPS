#include<stdio.h>
int main()
{
	int n, s=0, c, value;
	printf("numbers to be added \n");
	scanf("%d", &n);
	printf("Enter %d integers\n", n);
	for (c = 1; c <= n; c++)
	{
		scanf("%d", &value);
		s = s + value;
	}
	printf("Sum of integers = %d\n", s);
	
	return 0;
}
