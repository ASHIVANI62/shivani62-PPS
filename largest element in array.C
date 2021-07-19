#include<stdio.h>
int main(){
	int num;
	double arr[150];
	printf("Enter the number of elements between 1 to 150: ");
	scanf("%d",&num);
	
	for (int i = 0; i< num; ++i) {
		printf("Enter number%d: ", i + 1);
		scanf("%lf", &arr[i]);
	}
	for (int i=1; i < num; ++i) {
		if (arr[0] < arr[i]) {
			arr[0]=arr[i];
		}
	}
	
	printf("Largest element = %.2lf", arr[0]);
	
	return 0;
}
