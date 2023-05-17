#include <stdio.h>
int main ()
  {
	       int i,n,sum=0;
       printf("enter a number\n ");
       scanf("%d",&n);
       for (i=2;i<=n;i+=2)
       sum +=i;
       printf("sum of all even number from 1 to %d = %d",n,sum);
       return 0;
   }
       
