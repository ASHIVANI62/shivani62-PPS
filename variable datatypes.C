#include<stdio.h>
int main()
{
	int a;
	short int b;
	long int c;
	long long int d;
	char ch;
	float e;
	double f;
	long double g;
	printf("ENTER a,b,c,d,ch,e,f,g\n");
	scanf("%d",&a);
	scanf("%hi",&b);
	scanf("%ld",&c);
	scanf("%lli",&d);
	scanf("\n%c",&ch);
	scanf("%f",&e);
	scanf("%ld",&f);
	scanf("%lf",&g);
	printf("a=%d,b=%hi,c=%ld,d=%lli,ch=%c,e=%f,f=%ld,e=%lf");
	return 0;
	
}
