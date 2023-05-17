#include<stdio.h>
int main()
{
	int n,i,f1=-1,f2=1,f3=0;
	printf("enter a number\n ");
	scanf("%d",&n);
	printf("Fibonacci series \n");
	for (i=0;i<=n;i++)
	{
		f3=f1+f2;
		printf("%d\t",f3);
		f1=f2;
		f2=f3;
	
	} 
	return 0;
}
