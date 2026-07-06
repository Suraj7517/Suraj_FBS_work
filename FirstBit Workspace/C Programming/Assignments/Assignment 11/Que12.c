//mystrrchr
#include <stdio.h>

char* mystrrchr(char str[], char ch)
{
	int i = 0;
	char *ptr = NULL;

	while(str[i] != '\0')
	{
		if(str[i] == ch)
			ptr = &str[i];

		i++;
	}

	return ptr;
}

void main()
{
	char str[] = "Hello World";

	char *p = mystrrchr(str, 'l');

	if(p != NULL)
		printf("%s", p);
	else
		printf("Character Not Found!");
}