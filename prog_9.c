#include<stdio.h>
/*Write a program to calculate LCM of two numbers*/
int main()
{
  int n1, n2, max;
  printf("Enter the number1 and number 2 are: ");
  scanf("%d %d", &n1, &n2);
  max = (n1>n2)?n1:n2;
  while(1)
  {
      if(max%n1 == 0 && max%n2 == 0)
      {
          printf("LCM of n1 = %d and n2 = %d is LCM = %d", n1, n2, max);
          break;
      }
      max++;
  }
  return 0;
}
