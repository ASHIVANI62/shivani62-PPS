#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
void main(int argc,char *argv[])
{
	int num1,num2,res,i;
	char str[20];
	printf("\n No. of Parameters is %d",argc);
	for(i=0;i<argc;i++)
	printf("\n%s",argv[i]);
	num1=atoi(argv[1]);
	num2=atoi(argv[2]);
	res=add(num1,num2);
	printf("\n Sum =%d",res);
	
}
