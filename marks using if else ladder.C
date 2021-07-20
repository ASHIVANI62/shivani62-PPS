#include<stdio.h>
int main()
{
	float sub1,sub2,sub3,sub4,sub5,per;
	
	printf("Enter marks of 5 subjects\n");
	scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
	
	per = (sub1+sub2+sub3+sub4+sub5)/5.0;
	
	if(per>=0&&per<40)
		printf("failed\n");
	else if(per>=40&&per<60)
	    printf("second class\n");
	else if(per>=60&&per<70)
		printf("first class\n");
	else if (per>=70&&per<=100)
		printf("distinction\n");


}
