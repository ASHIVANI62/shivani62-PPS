#include<stdio.h>
void main()
{
	char *ptr,a='A';
	ptr=&a;
	
	printf(" \nsize of %d",sizeof(ptr));8
	printf(" \nvalue of ptr %u",ptr);address
	printf(" \nvalue of memory location to which ptr is pointing %f",*ptr);

}
