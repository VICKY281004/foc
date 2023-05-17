#include <stdio.h>
#include <conio.h>

int main ()
{
	int x=1,fact=1,n;
	printf("enter a number: \n");
	scanf("%d",&n);
	while(x<=n)
	{ 
	fact=fact*x;
	x++;
	}
	printf("factorial of %d:%d",n,fact);
	return 0;
}
