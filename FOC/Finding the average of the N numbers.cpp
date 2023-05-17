#include <stdio.h>
#include <conio.h>

int main ()
{
	int n,i,sum=0;
	float avg;
	printf("Enter a number :\n");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	sum=sum+i;
	printf("the sum is %d\n",sum);
	avg = (float)sum/n;
	printf("The avg of numbers %f",avg);
	return 0;
}
