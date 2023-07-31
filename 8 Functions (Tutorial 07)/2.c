//Tutorial 07 Q's

#include <stdio.h>
#include <stdlib.h>

void operations(int a, int b)
{
	int sum,diff;

	sum = a+b;
	diff = a-b;

	printf("The sum of the two numbers: %d\n",sum );
	printf("The difference of the two numbers: %d\n",diff );
	
}

int main()
{
	int n1 , n2;

	printf("Enter two inputs \n");
	scanf("%d %d",&n1,&n2);

	operations(n1,n2);
	
	return 0;
}