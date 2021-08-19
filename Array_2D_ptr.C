#include<stdio.h>
//offset = (ith row * total_no_of_col)+jth col;
// index = base address +offset 
int main(){
	int a[2][2] = {{1,2},{3,4}};
	int *ptr;
	int i,j;
	ptr =&a[0][0];
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%4d",*(ptr+(i * 2)+j));
			}
		printf("\n");
	}
}
