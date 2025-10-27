#include<stdio.h>
void main()
{
  int  factorialofno(int);
  printf("%d",factorialofno(5));
  }
int factorialofni(int n)
{
  if(n==1)
  return 0;
  else
    return(n * factorialofno(n-1));
    }
