#include<stdio.h>
#include<string.h>
int main()
{
	char source[] = "fresh2fresh";
	char target[20] ="";
	printf("\nsource string = %s", source);
	printf("\ntarget string = %s", target);
	strncpy(target,source,5);
	printf("\ntarget string after strncpy() = %s",target);
	return 0;
}
