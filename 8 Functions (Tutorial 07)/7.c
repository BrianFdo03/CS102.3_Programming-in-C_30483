#include <stdio.h>
#include <stdlib.h>

double doubleproduct(int a , float b)
{
	double mul = (double)a * (double)b;
	
	return mul;
}

int main()
{
	int n1,n2;
	
	printf("Enter two inputs\n" );
	scanf("%d %d",&n1,&n2);

	printf("The product of the two numbers: %lf \n",doubleproduct(n1,n2));
	
	return 0;
}