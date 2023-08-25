#include<stdio.h>

void cube(int n)
{
	int Cube;
	Cube=n*n*n;
	printf(" VELUE OF CUBE = %d",Cube);
	
}

main()
{
	int a;
	printf("ENTER VALUE = ");
	scanf("%d",&a);
	
	cube(a);
}
