#include <stdio.h>
void printArray(int [],int);
int main()
{
	int A[10],i,n;
	printf("\nEnter n");
	scanf("%d",&n); 
	printf("Enter %d numbers",n);
	 for(i=0;i<n;i++)
	   scanf("%d",&A[i]);
	 printf("\n");                                
	printArray(A,n);
	
	
	return 1;
}
void printArray(int num[],int n)
 {
  
int i;
  for ( i = 0; i < n; ++i) {
   printf("%5d",num[i]);
  }


}
