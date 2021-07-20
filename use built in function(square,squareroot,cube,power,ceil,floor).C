#include<stdio.h>
#include<math.h>
int main()
{
	int num,cube,square,power,fl,cl;
	float squareroot;
	printf("Enter the number:");
	scanf("%d",&num);
	cube=pow(num,3);
	square=pow(num,2);
	squareroot=sqrt(num);
	power=pow(num,4);
	fl=floor(num);
	cl=ceil(num);
	printf("cube = %d \nsquare = %d \nsquareroot=%f",cube,square,squareroot);
	printf("\n power 4 = %d \n floor = %d \n ceil = %d",power,fl,cl);
	return 0;
}
