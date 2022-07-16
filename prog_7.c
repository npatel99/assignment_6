#include<stdio.h>
/*Write a program to count digits in a given number*/
int main()
{
  int n, n2, n10, count = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  /*to count the no of decimal digits in number n*/
  n10 = n;
  while(n10)
  {
      count++;
      n10=n10/10;
  }
  printf("Total no of decimal digits in number %d is: %d \n", n, count);
  
  /*to count the no of binay digits in number n*/
  n2 = n;
  count = 0;
  while(n2)
  {
      count++;
      n2=n2/2;
  }
  printf("Total no of binary digits in number %d is: %d\n", n, count);
  
  return 0;
}
