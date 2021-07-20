#include<stdio.h>
int main()
{
	char name[50];
	char gender;
	
	printf("Enter name: ");
	scanf("%s",name);
	printf("Enter gender (M/F): ");
	scanf("\n%c",&gender);
    (gender=='F')?printf("\nHi Mrs.%s.",name):printf("\nHi Mr.",name);
	return 0;
		
}
