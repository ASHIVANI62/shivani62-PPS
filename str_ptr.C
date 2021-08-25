//pointer to strings
#include<stdio.h>
#include<string.h>
int main()
{
	int *ptr;
	
    char *str = "CYBER SECURITY";
//14 bytes
			// staring address is 1000
			//*str is char pointer variable
			
			// what is content(value) of str?:1000
			//
	int i,len = strlen(str);
	for(i=0;i<len;i++) //0 1 2 3 4 5 ---13
		printf("%c",*(str++));//i=0 C 1001 i=1 y 1002 i=2 B 1003 E 1004 R....//valueat(1000),valueat(1001,
	return 0;
}
