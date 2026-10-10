#include <stdio.h>

int main()
{
    int intArr[5];
    float floatArr[5];
    char charArr[5];
    int i;

    printf("Enter 5 integer values:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &intArr[i]);
    }

    printf("Enter 5 float values:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &floatArr[i]);
    }

    printf("Enter 5 characters:\n");
    for (i = 0; i < 5; i++)
    {
        scanf(" %c", &charArr[i]);
    }

    printf("\nInteger Array:\n");
    for (i = 0; i < 5; i++)
    {
        printf("intArr[%d] = %d, Address = %p\n", i, intArr[i], (void *)&intArr[i]);
    }

    printf("\nFloat Array:\n");
    for (i = 0; i < 5; i++)
    {
        printf("floatArr[%d] = %.2f, Address = %p\n", i, floatArr[i], (void *)&floatArr[i]);
    }

    printf("\nCharacter Array:\n");
    for (i = 0; i < 5; i++)
    {
        printf("charArr[%d] = %c, Address = %p\n", i, charArr[i], (void *)&charArr[i]);
    }

    return 0;
}
