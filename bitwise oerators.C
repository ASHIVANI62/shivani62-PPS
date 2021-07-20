#include<stdio.h>
int main() {
	int a = 48;
	int b = 29;
	int c = 0;
	c = a & b;
	printf("Line 1 - value of c is %d\n",c);
	c=a|b;
	printf("Line 2 - value of c is %d\n",c);
	c=a^b;
	printf("Line 3 - value of c is %d\n",c);
	c=~a;
	printf("LIne 4 - value of c is %d\n",c);
	c=a<<2;
	printf("Line 5 - value of c is %d\n",c);
	c=a>>2;
	printf("Line 6 - value of c is %d\n",c);
	return 0;
}
