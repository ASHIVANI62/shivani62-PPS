#include <stdio.h>
int main()
{
	int A[10][10],i,r,j,c,*ptr;  
	printf("Enter No. of rows,No. of Cols :");
	scanf("%d%d",&r,&c); 
	printf("Enter Elements :");
for(i=0;i<r;i++)
	for(j=0;j<c;j++) 
	{
	scanf("%d",&A[i][j]);
	}
	ptr=&A[0][0];
// You can achieve the same result by using pointer concept
	printf("\n The transpose of matrix is:- \n");
	for(i=0;i<c;i++)
	{
	for(j=0;j<r;j++)
		printf("%5d",*(ptr+(j*c+i)*sizeof(int)));
	printf("\n");
	}
	return 0;
}
