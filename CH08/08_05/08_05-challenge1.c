#include <stdio.h>

int main()
{
	char title[] = "Pointers don't intimidate me!\n";

	char * ptr = title; 

	int cnt = 0; 
	while (ptr != NULL)
	{
		printf("%c", *(ptr + cnt)); 
		cnt++; 
	}

	return 0;
}
