#include<stdio.h>
/*Write a program to calculate factorial of a number*/
int main()
{
  int N, i, factorial = 1;
  printf("Enter a number: ");
  scanf("%d", &N);
  if(N>=0)
  {
      for(i=1;i<=N;i++)
      {
          factorial = factorial*i;
      }
      printf("factorial of %d is : %d \n", N, factorial);
  }
  else
  {
      printf("Enter the valid number.......!!!\n");
  }
  return 0;
}
