#include <stdio.h>
#include <conio.h>

int main ()
{
	 int n;
	 printf("enter a integer:" );
	 scanf("%d",&n);
	 while(n!=0)
	 { 
	int digit=n%10;
	 n/=10;
	 printf("%d",digit);
	 }
	 return 0;
}
