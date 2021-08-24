#include<stdio.h>
#include<stdlib.h>
int main(){
	int *a;
	a = (int *)malloc(sizeof(int));//4
	printf("\nAllocated 4 bytes");
	*a=50;
	printf("\na=%d",*a);
	a = (int *)realloc(a,5 * sizeof(int));//4--->20
	*a=100;
	printf("\na=%d",*a);
	printf("\nReallocated to 5*4 bytes");
		free(a);
		printf("\na=%d",*a);
	return 0;
}
