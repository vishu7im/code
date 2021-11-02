#include <stdio.h>

// this is for show only


int star(int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int rstar(int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= row - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int a, b;

    printf("enter 1 for star pattern\n\n\n ");
    printf("enter 0 for reverse  star pattern\n\n\n ");
    printf("enter 9 for quite the program star pattern\n\n\n ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:

        printf("enter the index of your patter \n\n");
        scanf("%d", &b);
        printf("%d\n\n\n", star(b));

        break;

    case 0:
        printf("enter the index of your patter \n\n");
        scanf("%d", &b);
        printf("%d\n\n\n", rstar(b));

        break;

    case 9:
        printf("your program is quiting \n\n...");
        goto end;
        break;

    default:
        break;
    }
end:
    return 0;
}