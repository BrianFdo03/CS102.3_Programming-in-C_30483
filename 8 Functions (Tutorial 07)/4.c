//Tutorial 07 Q's

#include <stdio.h>
#include <stdlib.h>

int quotient(int a, int b)
{
	int quo;


	quo = a/b;

	return quo;
}

int main()
{
	int n1,n2;

	printf("Enter two numbers\n");
	scanf("%d %d",&n1,&n2);

	printf("The quotient of the calculation : %d\n",quotient(n1,n2) );

	return 0;
}