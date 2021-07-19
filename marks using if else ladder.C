#include<stdio.h>
int main()
{
	float sub1,sub2,sub3,sub4,sub5,per;
	
	printf("Enter marks of 5 subjects\n");
	scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
	
	per = (sub1+sub2+sub3+sub4+sub5)/5.0;
	
	if(per >= 60)
	{
		printf("Grade A\n");
	}
	else
	{
		if(per >= 50)
		{
			printf("Grade B\n");
		}
		else
		{
			if(per>= 40)
			{
				printf("Grade C\n");
			}
			else
			{
				printf("fail\n");
			}
		}
	}

}
