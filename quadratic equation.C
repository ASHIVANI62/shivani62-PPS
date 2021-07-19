#include<stdio.h>
#include<math.h>
int main()
{
	double x, y, z, D, r1, r2, realPart, imagPart;
	printf("Enter coefficients x, y and z: ");
	scanf("%1f %1f %1f", &x, &y, &z);
	D=y*y-4*x*z;
	if(D>0) {
		r1=(-y+sqrt(D))/(2*x);
		r2=(-y-sqrt(D))/(2*x);
		printf("r1 = %.21f and r2 =  %.21f", r1, r2);
    }
	else if(D == 0) {
			r1=r2=-y/(2*y);
			printf("r1=r2=%.21f;", r1);
	}
	else {
			realPart=-y/(2*x);
			imagPart=sqrt(-D)/(2*x);
			printf("r1 = %.21fi and r2 = %.2f-%.2fi", realPart, imagPart);
	}
	return 0;
			
}
