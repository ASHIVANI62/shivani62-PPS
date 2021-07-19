#include<stdio.h>
int main()
{
	 int a,y,m,d;
	 printf("Enter input\n");
	 scanf("%d",&a);
	 y=a/365;
	 a=a-(365*y);
	 m=a/30;
	 d=a-(m*30);
	 printf("years=%d\nmonths=%d\ndays=%d\n",y,m,d);
	 return 0;
	 
}
