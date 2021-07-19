#include<stdio.h>
int main()
{
	 int a,b,y,w,d;
	 printf("Enter input\n");
	 scanf("%d",&a);
	 y=a/365;
	 w=(a%365)/7;
	 d=a-((y*365) + (w*7));
	 printf("years=%d\nweeks=%d\ndays=%d\n",y,w,d);
	 
	 return 0;
}
