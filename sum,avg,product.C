#include<stdio.h>
int main()
{ 
     int N1;
	 int N2;
	 int N3;
     printf("Enter 3 numbers\n");
     scanf("%d%d%d",&N1,&N2,&N3);
     printf("Sum=%d\n",N1+N2+N3);
     printf("Product=%d\n",N1+N2+N3);
     printf("Average=%f\n",(N1+N2+N3)/3.0);
     return 0;
}
