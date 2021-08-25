#include <stdio.h>

/* Swap function declaration */
void swap(int  *num1, int  *num2);
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    /* Print original values of num1 and num2 */
    printf("Before swapping in main n");
    printf("Value of num1 = %d \n", num1);//12 24
    printf("Value of num2 = %d \n\n", num2);
    /* Pass the addresses of num1 and num2 */
    swap(&num1, &num2);

    /* Print the swapped values of num1 and num2 */
    printf("After swapping in main n");
    printf("Value of num1 = %d \n", num1); //
    printf("Value of num2 = %d \n\n", num2);

    return 0;
}
void swap(int  *x, int  *y)     
{
    int temp;

    temp = *x;  
    *x= *y;
    *y= temp;

    printf("After swapping in swap function n");
    printf("Value of num1 = %d \n", *x);// 24 12
    printf("Value of num2 = %d \n\n", *y);
}

//num1 num2  Main

//num1 num2  swap  

