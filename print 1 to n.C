#include<stdio.h>

int main()
{
	int num, count = 1;
	
    printf("enter a positive number\n");
    scanf("%d",&num);

    while(count <= num)
    {
	    printf("%d ", count);
	    count++;
	}
printf("\n");

return 0;
}
