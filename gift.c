#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  char a[30];
  //input of subject 
  printf("enter here subject that you pass\n\n_");
  scanf("%s",&a);
  
  //for science 
  if (strcmp(a,"science")==0){
    
    printf("you got price of 15 rupees");
    
  }
  //for maths
  else if (strcmp(a,"maths")==0){
    
    printf("you got price of 15 rupees ");
    
  }//for science maths both 
  else if (strcmp(a,"maths,science")==0){
    printf("you got 45 ruppes price ");
    
  }
  
  else {
    printf("enter wrong input");
  }
  
  
  
}
