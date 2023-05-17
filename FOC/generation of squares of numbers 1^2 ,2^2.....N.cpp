#include <stdio.h>
int main()
{

    	int i,n,sum=0;
		printf("enter a value :\n");
		scanf("%d",&n);
		
		for (i=1,i<=n,i++)
		{
		
		if (i!=n)
		
		    printf("%d^2+",i);
			
		else
		 printf("%d^2=%d",i,sum);
	}
}
