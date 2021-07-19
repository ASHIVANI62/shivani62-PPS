#include<stdio.h>
int main()
{
	int phy,pps,maths;
	float per;
	printf("Enter 3 subject marks: ");
	scanf("%d%d%d",&phy,&pps,&maths);
	per=(phy+pps+maths)/3.0;
	printf("Percentage = %.2f\n",per);
	if(per>=90)
	{
		printf("Grade A");
	}
	else if(per>=80)
	{
		printf("Grade B");
	}
	else if(per>=70)
	{
		printf("Grade C");
	}
	else if(per>=60)
	{
		printf("Grade D");
	}
	else if(per>=40)
	{
		printf("Grade E");
	} 
	else if(per<40) 
	{
		printf("Grade F");
	}
	return 0;
}
