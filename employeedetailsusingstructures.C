#include <stdio.h>
struct employee{
	char name[20];
	int EMPid;
	float Salary;
};

int main()
{
	
	struct employee emp;
	printf("\nEnter details :\n");
	printf("Name :");
	gets(emp.name);
	printf("ID :");
	scanf("%d",&emp.EMPid);
	printf("Salary :");
	scanf("%f",&emp.Salary);
	
	printf("\nEntered detail is:");
	printf("Name: %s" ,emp.name);
	printf("ID: %d" ,emp.EMPid);
	printf("Salary: %f\n",emp.Salary);
	return 0;
	
}
