#include <stdio.h>
#include <math.h>
int main()
{
 int a;
 printf("\nenter the value of a:");
 scanf("%d",&a);
 if(a>0)
 printf("\n the number is positive");
 else
  if(a<0)
    printf("\n the number is negative");
  else
     printf("\n the number is zero");  
}     