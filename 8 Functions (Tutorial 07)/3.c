#include <stdio.h>
#include <stdlib.h>

//Tutorial 07 Q's

int product(int a , int b)
{
	int mul = a*b;
	
	return mul;
}

int main()
{
	int n1,n2;
	
	printf("Enter two inputs\n" );
	scanf("%d %d",&n1,&n2);

	printf("The product of the two numbers: %d\n",product(n1 , n2));
	
	return 0;
}