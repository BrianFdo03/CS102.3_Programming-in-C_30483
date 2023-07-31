//Tutorial 07 Q's

#include <stdio.h>
#include <stdlib.h>

void sumof2()
{
	int n1,n2,sum;

	printf("Input two values\n");
	scanf("%d %d",&n1,&n2);

	sum = n1 + n2;

	printf("The sum of the two numbers : %d\n",sum );

}

int main()
{
	sumof2();
	sumof2();
	sumof2();
	sumof2();
	
	return 0;
}