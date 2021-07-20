#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character: ");
	scanf("%c",&ch);
	(ch>='a' && ch<='z') || (ch>='A' && ch<='Z') ? printf("It IS ALPHABET") : printf("IT IS NOT AN ALPHABET");
	return 0;
}
