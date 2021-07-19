#include<stdio.h>
int main()
{
	int arr[] = {12,34,56,78,90};
	int length = sizeof(arr)/sizeof(arr[0]);
	
	int min = arr[0]; 
	
	for(int i = 0;i < length; i++) {
		if (arr[i]<min)
     		min = arr[i];
	}
	
	printf("Smallest element of array is %d\n", min);
	
	return 0;
}
