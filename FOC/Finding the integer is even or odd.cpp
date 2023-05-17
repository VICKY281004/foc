#include <stdio.h>
#include <conio.h>

	int main ()
{
	int i,n;
	printf("enter a integer :\n");
	scanf("%d",&n);
	
	if (n%2==0||n%-2==0)
	{
		printf("even number ");
	}
		else 
		printf("odd number");
	return 0;
}
