#include<stdio.h>
#include<math.h>
int main()
{ 
     //points are (a,b,) and (c,d)//
     int a,b,c,d;
     float dist;
     printf("Enter point P coordinates\n");
     scanf("%d%d",&a,&b);
     printf("Enter point Q coordinates\n");
     scanf("%d%d",&c,&d);
     dist=sqrt(pow(a-c,2)+pow(b-d,2));
     printf("Distance between the points=%f",dist);
     
     return 0;
}
