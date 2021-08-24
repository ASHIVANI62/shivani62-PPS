#include<stdio.h>
struct complex add(struct complex,struct complex);
void printcomplex(struct complex);
struct complex
{
	int real;
	int imaginary;
};
int main()
{    
int i;
	struct complex c1,c2,c3;
	printf("\n Enter real part :");
	scanf("%d",&c1.real);
	printf("\n Enter Imaginary part :");
	scanf("%d",&c1.imaginary);
	printf("\n Enter real part :"); 
	scanf("%d",&c2.real);
	printf("\n Enter Imaginary part :");
	scanf("%d",&c2.imaginary);
	c3=add(c1,c2);
	printcomplex(c1);
    printcomplex(c2);
    printf("\n Result\n");
	printcomplex(c3);
  }
	
	void printcomplex(struct complex c)
	{
	printf("\n The complex number is : %d + (%d) i",c.real,c.imaginary);  

}

struct complex  add(struct complex c1,struct complex c2)
{
	struct complex c3;
	c3.real=c1.real+c2.real;
	c3.imaginary=c1.imaginary+c2.imaginary;
	return c3;
}
