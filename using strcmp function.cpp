#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	char str2[200];
	int cmp;
	printf("Enter string\n");
	gets(str1);
	printf("Enter another string\n");
	gets(str2);
	cmp=strcmp(str1,str2);
	printf("\n After comapring n characters of str1,str2 is %d",cmp);
	return 0;
}
