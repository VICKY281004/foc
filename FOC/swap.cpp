#include <stdio.h>
#include <conio.h>

int main ()
{
	int a,b,c;
	printf("enter first number:\n" );
	scanf("%d",&a);
	printf("enter second number :\n");
	scanf ("%d",&b);
	printf("before swapping a=%d , b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("after swapping a=%d,b=%d",a,b);
	return 0;

} 
