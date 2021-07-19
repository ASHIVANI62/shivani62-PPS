#include<stdio.h>

int  main()
{
	int p, q, r;
	printf("Enter 2 angles of triangle: ");
	scanf("%d%d", &p, &q);
	r=180-(p+q);
	printf("3rd angle of triangle = %d",r);
	
	return 0;
	
}
