
#include <string.h>
//Splits a string into tokens.
void main(){
	char str[] = "Java,C,Python";

	char *token = strtok(str, ",");

	while(token != NULL)
		{
    		printf("%s\n", token);
    		token = strtok(NULL, ",");
		}		
}