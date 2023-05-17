#include <stdio.h>
#include <math.h>

int main ()
{
	int n,i,sum=0;
	printf("enter a number: \n");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
	 sum=sum+pow(i,i);
	}
	
	printf("the total value %d",sum);
	
	return 0;
	
}
