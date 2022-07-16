#include<stdio.h>
/*Write a program to check whether a given number is a Prime number or
not*/
int main()
{
  int n, i;
  /*a number is prime number if it is divisible by only 1 and number itself*/
  printf("Enter a number: ");
  scanf("%d", &n);
  for(i=2; i<n; ++i)
  {
      if(n%i==0)
      {
          printf("The number is Prime Number......!!\n");
          break;
      }
  }
  if(i == n)
  {
      printf("The Number is not prime number......!!\n");
  }
  
  return 0;
}
