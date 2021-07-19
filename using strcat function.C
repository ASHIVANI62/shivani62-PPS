#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	printf("Enter string\n");
	gets(s1);
	printf("Enter other string\n");
	gets(s2);
	printf("\nBefore appending characters :s1=");
puts(s1);
    strcat(s1,s2);
    printf("\n After appending characters :s2=");
    puts(s1);
    return 1;
}
