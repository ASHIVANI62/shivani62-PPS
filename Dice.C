#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	char ch,n;
	int num=-1;
	do
	{
		printf("\n\nDo you want to play the DICE  ");
		if(num!=-1)
        printf(" again ");
        printf(" Y or N:  ");
        fflush(stdin);
		scanf("%c",&ch);
		if(ch=='y'||ch=='Y')
		{ 
			printf("\n Press Enter to role the DICE ");
			fflush(stdin);
			scanf("%c",&n);
			srand(time(0));
			num=rand()%6 +1;
			printf("\n Your number is : %d",num);
		}
		else
		exit(0);
	}while(ch=='y'||ch=='Y');
	return 1;
}
