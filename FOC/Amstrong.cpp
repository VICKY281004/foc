#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n,sum=0,temp;
	printf("enter a number :\n");
	scanf("%d",&n);	
	temp=n;
	while(n>0)
	{
		i=n%10;
		sum+=(i*i*i);
		n=n/10;
	}
	if (temp==sum)
	printf("amstrong number");
	else 
	printf("not amstrong ");
	return 0;
}
