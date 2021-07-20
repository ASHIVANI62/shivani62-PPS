#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character : ");
	scanf("%c",&ch);
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	{
		printf("'%c'entered character  is an alphabet ",ch);
	}
	else if(ch>='0'&&ch<='9')
	{   
	    printf("'%c'entered character %c is digit ",ch);
	}
	else
	{
		printf("'%c' entered character is other symbol ",ch);
	}
	return 1;
}
