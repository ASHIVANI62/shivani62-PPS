#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *ptr,n=5,i;
	ptr=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	  printf("\n%d",*(ptr++));
	printf("\n Enter 5 elements :\n");
	for(i=0;i<n;i++)
	  scanf("%d",(ptr++));
	  ptr=ptr-n;
	for(i=0;i<n;i++)
	  printf("%4d",*(ptr++));
	
}
