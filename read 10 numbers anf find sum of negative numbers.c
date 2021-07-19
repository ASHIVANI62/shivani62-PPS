#include<stdio.h>
int main()
{
		int n,nsum=0,noip=0;
		   do
		   {
			printf("Enter a number: ");
			scanf("%d",&n);
			if(n<0)
			{
			nsum+=n;
		}
		    noip++;
	   }while(noip<10);
	            printf("The sum of negative number is %d",nsum);
}
