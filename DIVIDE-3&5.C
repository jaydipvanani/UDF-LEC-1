#include<stdio.h>

void d(int n)
{
	

	
	if( n%3 == 0 && n%5 == 0 )
	{
		printf("THIS NUMBER IS DIVISBLE 3 & 5")	;
	}
	else
	{
		printf("THIS NUMBER IS NOT DIVISBLE ")	;
	}
}

main()
{
	int a;
	printf("ENTER VALUE = ");
	scanf("%d",&a);
	
	d(a);
}
