#include <stdio.h>

int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }

    else
    {

        return (num * factorial(num - 1));
    }
}

int main()
{
    int i;
    printf("enter your no want factorial \n");
    scanf("%d", &i);

    printf("your factorial of %d  is %d\n", i, factorial(i));
    return 0;
}