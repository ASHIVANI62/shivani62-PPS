#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character: ");
	scanf("%c",&ch);
	(ch>='0'&&ch<='9') ? printf("IT IS DIGIT") : printf("IT IS NOT A DIGIT");
	return 0;
}
