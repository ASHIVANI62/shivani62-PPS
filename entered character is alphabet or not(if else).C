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
	else 
	{
	printf("'%c' entered character is not an alphabet ",ch);
	}
	
	return 1;
}
