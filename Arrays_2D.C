#include <stdio.h>
int main()
{
	int A[10][10],i,r,j,c;  
	printf("Enter No. of rows,No. of Cols :");
	scanf("%d%d",&r,&c); 
	
	 for(i=0;i<r;i++) 
	 {
				             
	    for(j=0;j<c;j++) 
		{
		
		 scanf("%d",&A[i][j]); 
	    }
     }	    
	 for(i=0;i<r;i++)             
	     {
		   for(j=0;j<c;j++) 
	     	{
		
		      printf("%4d",A[i][j]); 
	        }
	        printf("\n");

        }
	
	
	
	return 1;
	
}
