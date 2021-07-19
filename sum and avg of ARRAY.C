#include<stdio.h>
int main()
{
	int a[32],n,i;
	float avg=0,sum=0;
	printf("Enter numbers of elemet in ARRAY: ");
	scanf("%d",&n);
	printf("\nEnter Array of element: \n");
	{
		for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum=sum+a[i];
		avg=sum/n;
	}
	printf("\n Sum of element in Array: %f",sum);
	printf("\n Average of element in Array: %f",avg);
	return 0;
}
