#include<stdio.h>
/*Write a program to calculate sum of first N odd natural numbers*
* sum of N odd natural number = N*N
*/
int main()
{
  int N, i=1, sum = 0;
  printf("Enter Natural number: ");
  scanf("%d", &N);
  printf("\n**********method-1[by while loop]**********\n");
  while(i<=N)
  {
      sum = sum+(2*i-1);
      i++;;
  }
  printf("sum of %d odd natural number is : %d \n", N, sum);
  printf("\n\n***********method-2[by formula]***********\n");
  int sum2 = N*N;
  printf("sum of %d odd natural number is : %d \n", N, sum2);
  
  return 0;
}
