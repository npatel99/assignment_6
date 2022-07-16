#include<stdio.h>
/*Write a program to calculate sum of first N natural numbers*
* sum of N natural number = N*(N+1)/2 
*/
int main()
{
  int N, n1, sum = 0;
  printf("Enter Natural number: ");
  scanf("%d", &N);
  printf("\n**********method-1[by while loop]**********\n");
  n1 = N;
  while(n1)
  {
      sum+=n1;
      n1--;
  }
  printf("sum of %d natural number is : %d \n", N, sum);
  printf("\n\n***********method-2[by formula]***********\n");
  int sum2 = N*(N+1)/2;
  printf("sum of %d natural number is : %d \n", N, sum2);
  
  return 0;
}
