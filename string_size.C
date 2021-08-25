#define CONCAT(a,b) a##b
#define ROLLNUMBER "20W1A0106"
#include<stdio.h>
int main()
{
	printf("CONCAT(20,40) = %d\n", CONCAT(20,40));
	printf("CONCAT(10.5, 208) = %f\n", CONCAT(10.5, 208));
    printf("ROLLNUMBER = %s\n", CONCAT(ROLL,NUMBER));
	return 0;
}

