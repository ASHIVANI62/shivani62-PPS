#include<stdio.h>
int main()
{
	long id;
	float hours,salary,wage;
	printf("Enter Employee ID\n");
	scanf("%Id",&id);
	printf("Enter total number of hours worked\n");
	scanf("%f",&hours);
	printf("Enter wage per hour\n");
	scanf("%f",&wage);
	salary=hours*wage;
	printf("salary=%.2f",salary);
	
	return 0; 
}
