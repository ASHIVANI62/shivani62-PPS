#include<stdio.h>
int main()
{
	int Num,Ones,Tens,a,Ans;
	printf("Enter number: ");
	scanf("%d",&Num);
	Ans = (Num/10)/10;
	printf("after exclusion of last two digits: %d",Ans);
	return 0;
	
}
