#include<stdio.h>
int main()
{
	int j;
	char ch;
	char str[100];
	printf("\nEnter paragraph and end with * :\n");
	for(j=0;ch!='*';j++)
	{
		ch=getchar();
		str[j]=ch;
	}
	str[--j]='\0';
	printf("\n\n string id \n");
	puts(str);
}
