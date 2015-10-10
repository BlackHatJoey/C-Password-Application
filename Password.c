#include <stdio.h>

#include <string.h>

int main()
{	
    
	char string[256];
	printf("Please enter Password \n");
	fgets ( string, 256, stdin );
	printf( string );
	if (strncmp(string, "Password", 8) == 0)
		printf("Authorised Access\n");
	else
		printf("Access denied\n");
	
}