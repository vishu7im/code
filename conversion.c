#include <stdio.h>

int main()
{
    int cmd;
    float i, o;
    // cmd stand for input from user 
    // float i is the digit input user and o is the outup for calculation 

start://this this is toogel to sift the program on beginning

    printf("\n\n\n\n\n\nThere you program convert various things\n\n\n");
    printf("enter '1' for  km to miles! \n\n ");
    printf("enter '2' for  inch to foot!\n\n ");
    printf("enter '3' for  cm to inch! \n\n ");
    printf("enter '4' for  pound to kg! \n\n ");
    printf("enter '5' for  inch to meter!\n\n ");
    printf("enter '9' for  quite the program! \n\n ");
    scanf("%d", &cmd);

    switch (cmd)
    {
    case 1:
        printf("for conversion  km to miles! enter digit\n");
        scanf("%f", &i);
        o = i / 1.609;
        printf("%.2f\n\n\n\n\n\n", o);

        goto start;
        break;

    case 2:
        printf("for conversion  inch to foot! enter digit\n");
        scanf("%f", &i);
        o = i * 12;
        printf("%.2f\n\n\n\n\n\n", o);
        goto start;
        break;

    case 3:
        printf("for conversion   cm to inch! enter digit\n");
        scanf("%f", &i);
        o = i / 2.54;
        printf("%f\n\n\n\n\n\n", o);
        goto start;
        break;

    case 4:
        printf("for conversion   pound to kg! enter digit\n");
        scanf("%f", &i);
        o = i / 2.205;
        printf("%.2f\n\n\n\n\n\n", o);
        goto start;
        break;

    case 5:
        printf("for conversion  inch to meter! enter digit\n");
        scanf("%f", &i);
        o = i / 39.37;
        printf("%.2f\n\n\n\n", o);
        goto start;
        break;
    case 9:
        printf("your program exit \n\n\n\n\n\n\n");
        
        break;

    default:
        break;
    }
// end:// for quit the proggram 
    return 0;
}
