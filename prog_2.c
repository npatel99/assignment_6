#include<stdio.h>
/*Write a program to calculate sum of first N even natural numbers*
* sum of N even natural number = N*(N+1)
*/
int main()
{
  int N, i=1, sum = 0;
  printf("Enter Natural number: ");
  scanf("%d", &N);
  printf("\n**********method-1[by while loop]**********\n");
  while(i<=N)
  {
      sum = sum+2*i;
      i++;;
  }
  printf("sum of %d even natural number is : %d \n", N, sum);
  printf("\n\n***********method-2[by formula]***********\n");
  int sum2 = N*(N+1);
  printf("sum of %d even natural number is : %d \n", N, sum2);
  
  return 0;
}
