#include <stdio.h>
#define MAX_SIZE 100 // Maximum size of the string

int main()
{
    char text[MAX_SIZE]; /* Declares a string of size 100 */
    int index= 0;

    /* Input string from user */
    printf("Enter any string: ");
    scanf("%s",text);
    //gets(text);

    /* Iterate though last element of the string */
    while(text[index] != '\0')
    {
        index++;
    }

    printf("Length of '%s' = %d", text, index);

    return 0;
}
