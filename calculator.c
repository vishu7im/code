#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{ int a,b,c;
  printf("this is the 2 digits calculator \n\a\n");
  
  //input first digit 
  printf("enter first digit\n_");
  scanf("%d", &b);
  
  //input second digit
  printf("enter second digit\n_");
  scanf("%d", &c);
  
  //input for operation 
  printf("\n\nif you want \n add enter 1\n multiply enter 2\n subtract enter 3\n division enter 4\n");
  scanf("%d", &a);
  
  switch(a)
  { case 1:
    //code for add
    printf("\n\nthe sum is %d", b+c);
    break;
  
    case 2:
    //code for multiply 
    printf("\n\nthe multiply is %d", b*c);
    break;
    
     case 3:
    //code for subtract 
    printf("\n\nthe subtract is %d", b-c);
    break;
    
     case 4:
    //code for division 
    printf("\n\nthe division is %d", b/c);
    break;
    
    default :
      //code
      printf("enter invalid statement check again");
  }
}
