#include<stdio.h>
int main()
{ 
int flat_rate,flat_size;
printf("enter the size of the flat:");
scanf("%d",&flat_size);
if(flat_size<=1000)
flat_rate=15;
else if (flat_size>1000 && flat_size<=2000)
flat_rate=15+((flat_size-1000)*0.0175);
else if(flat_size>2000 && flat_size<=3000)
flat_rate=15+((flat_size-1000)*0.02);
else 
flat_rate=70;
printf("flat rate:%d",flat_rate);
return 0;
}
