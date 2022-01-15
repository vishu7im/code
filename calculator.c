#include <stdio.h>

int main()
{ 
  int a ;
  float b, c;
  printf("this is the 2 digits calculator \n\a\n");
   start:

  //input first digit
  printf("enter first digit\n_");
  scanf("%f", &b);

  //input second digit
  printf("enter second digit\n_");
  scanf("%f", &c);

  //input for operation
  printf("\n\nfor add enter 1\n for multiply enter 2\n for subtract enter 3\n for division enter 4\n for quit enter 9\n");
  scanf("%d", &a);

  switch (a)
  {
  case 1:
    //code for add
    printf("\n\nthe sum is %f", b + c);
goto start;
    break;

  case 2:
    //code for multiply
    printf("\n\nthe multiply is %f", b * c);
goto start;
    break;

  case 3:
    //code for subtract
    printf("\n\nthe subtract is %f", b - c);
goto start;
    break;

  case 4:
    //code for division
    printf("\n\nthe division is %f", b / c);
goto start;
    break;

  case 9:
    //code for quit
    printf("\n\n the program is quitting..... ");
    break ;

  default:
    //code
    printf("enter invalid statement check again  \n\n\n");
goto start;
  }
  
}
