#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char character;

	printf("Enter your character\n");
	scanf("%c",&character);



	switch(character)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':printf("This is a vowel"); break;
	
	/* In here when typing cases use ' ' 
	 If not used compiler thinks that the characters are variables */ 

	/*And we cant use " " because its a char 
	 If string was present we should use " "*/
	
	default : printf("Consonent");
	
	}

	return 0;
}