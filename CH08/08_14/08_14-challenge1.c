#include <stdio.h>
#include <stdlib.h>

// write the get_input() function here
char * get_input(size_t size)
{
	char * res = malloc(sizeof(char) * size); 

	if (res == NULL)
	{
		printf("storage allocation was unsuccessful\n");
		exit(1);  
	}

	fgets(res,size,stdin);

	for (int i = 0; i < size; i++)
	{
		if (*(res+i) == '\n')
		{
			*(res+i) = '\0';
			break; 
		}
	}

	return res; 
}

int main()
{
	char *your_name,*your_city;

	printf("Your name: ");
	your_name = get_input(32);
	printf("Your city: ");
	your_city = get_input(32);

	printf("%s lives in %s.\n",your_name,your_city);

	free(your_name); 
	free(your_city);

	return 0;
}
