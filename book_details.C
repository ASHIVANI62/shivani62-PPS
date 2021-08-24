#include<stdio.h>
struct student
{
	char Name[20];
	int Rno;
	int Marks[3];
};
int main()
{
	struct student s[10];
	int i,j,n;
	printf("\n Enter no. of students :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("\n Enter details of student %d: ",i+1);
	scanf("%s%d",s[i].Name,&s[i].Rno);
	printf("\n Enter 3 subjects Marks: ");
	for(j=0;j<3;j++)
	   scanf("%d",&s[i].Marks[j]);
    }
	
	printf("\n The student Details Are :\n");
	printf("-------------------------------");
	printf("\n NAME      RNO      M1     M2     M3");
	for(i=0;i<n;i++)
	{
	printf("\n%s%8d",s[i].Name,s[i].Rno);
	for(j=0;j<3;j++)
	printf("%8d",s[i].Marks[j]);
    }
}
