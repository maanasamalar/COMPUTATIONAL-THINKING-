#include<stdio.h>
int main()
{
  int a[100],i,n;
  scanf("%ld",&n);
  for(i=0;n>0;i++)
  {
    a[i]=n%2;
    n=n/2;
  }
  for(i=i-1;i>=0;i--)
  {
    printf("%ld",a[i]);
  }
  return 0;
}

      
