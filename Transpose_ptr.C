#include <stdio.h>
int main()
{
	int A[10][10],i,r,j,c,(*ptr)[10];  
	printf("Enter No. of rows,No. of Cols :");
	scanf("%d%d",&r,&c); 
	printf("Enter Elements :");
	 for(i=0;i<r;i++) 
	 {
	     for(j=0;j<c;j++) 
		{
		 scanf("%d",&A[i][j]); 
	    }
     }	
	 ptr=A; 
     printf("\n The Matrix is \n");
	 for(i=0;i<r;i++)             
	     {
		   for(j=0;j<c;j++) 
	     	{
		     printf("%4d",*(*(ptr+i)+j);
			 //ptr++; 
	        }
	        printf("\n");

         }  
         ptr=A;
		 printf("\n The Transpose Matrix is \n"); 
	 for(i=0;i<c;i++)             
	     {
		   for(j=0;j<r;j++) 
	     	{
		     printf("%4d",*(*(ptr+i)+j)); 
	        }
	        printf("\n");
	        
	        
	

         }
	
	
	
	return 1;
	
}
