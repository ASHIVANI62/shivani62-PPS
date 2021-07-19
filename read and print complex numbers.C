#include<stdio.h>
struct Complex
{ 
     int r,i;   //r is real ,i is imaginery//
};
int main()
{   
    struct Complex c; 
    printf("\nEnter the real part of c ");
	scanf("%d",&c.r);
	printf("\nEnter the imaginary part of c: ");
	scanf("%d",&c.i);
	printf("\n The complex number c is: %d+i%d",c.r,c.i);
	    
    return 0;
}
