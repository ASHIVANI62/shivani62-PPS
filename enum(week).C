#include<stdio.h>
void main()
{
enum WeekDays{Mon=1,tue,wed,thurs,fri,sat,sun}days;
int i;  
for(i=Mon;i<=sun;i++)
{
printf("\n %d",i);
}
getch();
}

