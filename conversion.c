#include <stdio.h>

int main()
{
    int cm;
    float i, o;

    printf("there you program convert various things\n\n\n");
    printf("enter '1' for  km to miles! \n\n ");
    printf("enter '2' for  inch to foot!\n\n ");
    printf("enter '3' for  cm to inch! \n\n ");
    printf("enter '4' for  pound to kg! \n\n ");
    printf("enter '5' for  inch to meter!\n\n ");
    printf("enter '9' for  quite the program! \n\n ");
    scanf("%d", &cm);


   do
    {
        switch (cm)
        {case 1:
            printf("for conversion  km to miles! enter digit\n");
            scanf("%f", &i);
            o = i /1.609;
            printf("%f", o);
            break;

        case 2:
            printf("for conversion  inch to foot! enter digit\n");
            scanf("%f", &i);
            o = i * 12;
            printf("%f", o);
            break;

        case 3:
            printf("for conversion   cm to inch! enter digit\n");
            scanf("%f", &i);
            o = i /2.54;
            printf("%f", o);
            break;

        case 4:
            printf("for conversion   pound to kg! enter digit\n");
            scanf("%f", i);
            o = i /2.205;
            printf("%f", o);
            break;

        case 5:
            printf("for conversion  inch to meter! enter digit\n");
            scanf("%f", &i);
            o = i /39.37;
            printf("%f", o);
            break;

        default:
            break;
        }
    } while (cm != 9);
    return 0;
}
