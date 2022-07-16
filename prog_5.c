#include<stdio.h>
/*Write a program to calculate sum of cubes of first N natural numbers*
* sum of cubes of first N natural number = [N*(N+1)/2]^2
*/
int main()
{
  int N, i=1, sum = 0;
  printf("Enter Natural number: ");
  scanf("%d", &N);
  printf("\n**********method-1[by while loop]**********\n");
  while(i<=N)
  {
      sum = sum+i*i*i;
      i++;;
  }
  printf("sum of cubes of %d natural number is : %d \n", N, sum);
  printf("\n\n***********method-2[by formula]***********\n");
  int sum2 = (N*(N+1)/2)*(N*(N+1)/2);
  printf("sum of cubes of %d natural number is : %d \n", N, sum2);
  
  return 0;
}
