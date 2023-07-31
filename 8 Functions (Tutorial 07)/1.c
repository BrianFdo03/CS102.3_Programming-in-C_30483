//Tutorial 07 Q's

#include <stdio.h>
#include <stdlib.h>

void sumof2()
{
	int n1,n2,sum,diff;

	printf("Input two values\n");
	scanf("%d %d",&n1,&n2);

	sum = n1 + n2;
	diff = n1 - n2;

	printf("The sum of the two numbers : %d\n",sum );
	printf("The diff of the two numbers : %d\n",diff );
	
}

int main()
{
	sumof2();
	
	return 0;
}