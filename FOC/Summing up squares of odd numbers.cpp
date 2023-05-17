#include <stdio.h>
#include <conio.h>

int main ()
{

      int n,i,sum=0;
      printf("enter a value :\n");
      scanf("%d",&n);
      
      for (i=0;i<=n;i++)
      if (i%2!=0)
      {
      	sum=sum+(i*i);
	  }
	  printf("sum of squares of odd numbers %d",sum);
	  
	  return 0;
}
