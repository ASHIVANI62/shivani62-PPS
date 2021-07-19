#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	char OP;
	printf("Enter two integer values: ");
	scanf("%d%d",&x,&y);
    fflush(stdin);
	printf("Enter a operand + or - or * or / or %: ");
	scanf("%c",&OP);
	switch(OP)
	{
		case '+':
			printf("Result of x+y is: %d",(x+y));
			break;
		case '-':
			printf("Result of x-y is: %d",(x-y));
			break;
		case '*':
			printf("Result of x*y is: %d",(x*y));
			break;
		case '/':
			printf("Result of x/y is: %d",(x/y));
			break;
		case '%':
			printf("Result of x%y is: %d",(x%y));
			break;
					
		default:
			printf("Invalid Operand");
	}
	getch();
} 
