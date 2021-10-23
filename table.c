#include <stdio.h>


void main()
{
  /* a stand for input 
     i continuety 
     a*i stand for multiplaction */
  int a,i;
  //input no. 
  printf("enter here no.\n\n_");
  scanf("%d",&a);
  
  printf("\n\nthis is the tables of  %d. \n\n",a);
  
  //output of table 
  //using loop for this 
  
  for(i=1;i<11;i=i+1)
  {
    printf("%d * %d = %d\n", a,i,a*i );
    
  }
  return 0;
  
}


