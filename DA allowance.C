#include<stdio.h>
int main()
{
	float basic, da, hra, ta, others;
	float pf, it;
	float net_salary;
	
	printf("Enter Basic salary ($): ");
	scanf("%f",&basic);
	printf("Enter HRA ($): ");
	scanf("%f",&hra);
	printf("Enter TA ($): ");
	scanf("%f",&ta);
	printf("Enter Others ($): ");
	scanf("%f",&others);
	da = (basic*12)/100;
	pf = (basic*14)/100;
	it = (basic*15)/100;
	net_salary = basic + da + hra + ta + others -(pf+it);
	printf("Net Salary is: $ %0.2f\n",net_salary);
	
	return 0; 
}
