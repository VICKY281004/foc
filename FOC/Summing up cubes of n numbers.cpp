#include <stdio.h>
#include <conio.h>

int main()
{

	int n,i,sum=0;
	printf("enter a number:\n");
	scanf("%d",&n);
	for( i=0;i<=n;i++)
	{
	  sum=sum+(i*i*i);
		
	}
	printf("sum of cubes %d",sum);
	return 0;
}
	
