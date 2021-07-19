#include<stdio.h>
int main()
{
	  int P;
	  int T;
	  int R;
	  float SI;
	  printf("Enter P,T,R values\n");
	  scanf("%d%d%d",&P,&T,&R);
	  SI=(P*T*R)/100.0;
	  printf("simple interest=%f",SI);
	  return 0;	  
}
