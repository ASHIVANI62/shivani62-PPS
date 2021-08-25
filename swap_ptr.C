#include <stdio.h>

/* Swap function declaration */
void swap(int  *, int  *);
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);//25 50
    /* Print original values of num1 and num2 */
    printf("Before swapping in main n");
    printf("Value of num1 = %d \n", num1);// 25 50
    printf("Value of num2 = %d \n\n", num2);
    /* Pass the addresses of num1 and num2 */
    swap(&num1, &num2);

    /* Print the swapped values of num1 and num2 */
    printf("After swapping in main n");
    printf("Value of num1 = %d \n", num1); //50 25
    printf("Value of num2 = %d \n\n", num2);

    return 0;
}
void swap(int  *x, int  *y) //   x=2000 y=4000 num1,num2   
{
    int temp;

    temp = *x;//value of num1 25 50  
    *x= *y;//
    *y= temp;

    printf("After swapping in swap function n");
    printf("Value of num1 = %d \n", *x);
    printf("Value of num2 = %d \n\n", *y);
}

//num1 num2  Main

//num1 num2  swap  

