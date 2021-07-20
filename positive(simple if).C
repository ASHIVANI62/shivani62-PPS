#include<stdio.h>
int main()
{
	int num;
	printf("enter number :");
	scanf("%d",&num);
	if(num>0) 
	{
	   printf("%d is a positive number \n",num);
    }
    if(num<0)
	{
    	printf("%d is a not number \n",num);
	}
	
    return 1;
}
