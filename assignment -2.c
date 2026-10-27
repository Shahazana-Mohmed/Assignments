#include <stdio.h>
#include <math.h>
int main()
{
 float l,b,A,P;
 printf("\n enter the length of rectangle l:");
 scanf("%f",&l);
 printf("\n enter the breadth of rectangle b:");
 scanf("%f",&b);
 A=(l*b);
 printf("\n the area of rectangle is %.2f",A);
 P=(0.5*(l+b));   
     printf("\n the perimeter of rectangle is%.2f",P);  
}     