#include <stdio.h>
#include <stdlib.h>

void operations(int a,int b)
{
	int sum,diff,product;

	sum = a+b;
	diff = a-b;
	product = a*b;

	printf("Sum : %d\n"
	 		"difference : %d\n"
	 		"product : %d\n"

	 		,sum,diff,product);
}

int main(int argc, char const *argv[])
{
	int n1,n2;

	printf("Enter two inputs\n");
	scanf("%d %d", &n1,&n2);
	
	operations(n1,n2);

	return 0;
}