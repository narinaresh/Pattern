#include <stdio.h>


// dont worry about this function ,it just change the color of the printing statement
void printRed(const char *text)
{
    printf("\033[1;31m%s\033[0m", text);
}

// it print the right half triangle pattern
int right_half_triangle(int count)
{
    printRed("PRINTING RIGHT HALF TRIANGLE PATTERN ....\n");
    for (int i = 0; i <= count; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    printRed("PATTERN WAS PRINTED\n");
    printf("\n");
}

// it print inverted right haf triangle pattern
int inverted_right_half_triangle(int count)
{
    printRed("PRINTING INVERTED RIGHT HALF TRIANGLE PATTERN ....\n");
    for (int i = 0; i <= count; i++)
    {
        for (int j = count; j >= i; j--)
        {
            printf("* ");
        }

        printf("\n");
    }
    printRed("PATTERN WAS PRINTED\n");
    printf("\n");
}

// it print the left half triangle pattern
int left_half_triangle(int count)
{
    printRed("PRINTING LEFT HALF TRIANGLE PATTERN ....\n");
    for (int i = 0; i <= count; i++)
    {

        for (int k = count; k >= i; k--)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printRed("PATTERN WAS PRINTED\n");
    printf("\n");
}

// it print the inverted left half triangle pattern
int inverted_left_half_triangle(int count)
{
    printRed("PRINTING INVERTED LEFT HALF TRIANGLE PATTERN ....\n");
    for (int i = 0; i <= count; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf(" ");
        }

        for (int k = count; k >= i; k--)
        {
            printf("* ");
        }

        printf("\n");
    }
    printRed("PATTERN WAS PRINTED\n");
    printf("\n");
}



// it print the full triangle pattern
int full_triangle(int count)
{
    printRed("PRINTING FULL TRIANGLE PATTERN ....\n");
    for (int i = 1; i <= count; i++)
    {
        for (int j = count; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printRed("PATTERN WAS PRINTED\n");
    printf("\n");
}

// it print the inverted full triangle pattern
int inverted_full_triangle(int count)
{
    printRed("PRINTING INVERTED FULL TRIANGLE PATTERN ....\n");
    for (int i = count; i >= 1; i--)
    {
        for (int j = count; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printRed("PATTERN WAS PRINTED\n");
    printf("\n");
}
