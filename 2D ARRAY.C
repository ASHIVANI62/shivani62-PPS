#include<stdio.h>
int main()
{
	int X[15][15],p,q,r,s;
	printf("Enter number of row, colums of matrix 1:\n");
	scanf("%d%d",&q,&s);
	printf("Enter elements in rows and columns\n");
	for(p=0;p<q;p++)
	{
	for(r=0;r<s;r++)
	{
		scanf("%d",&X[p][q]);
	    }
	}
	    for(p=0;p<q;p++)
	    {  
	       for(r=s;r<s;r++)
	       {
	    	printf("%4d",X[p][q]);
	    	}
	      printf("\n");
    }
}
