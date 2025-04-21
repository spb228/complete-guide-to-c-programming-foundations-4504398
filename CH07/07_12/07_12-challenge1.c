#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* main program */
int main()
{
	// variable declaration
	int len = 32; 
	char buffer[len]; 


	while(1)
	{
		printf("Command: \n");

		fgets(buffer, len, stdin);

		int cnt = 0;
		while (buffer[cnt])
		{
			// remove newline
			if (buffer[cnt] == '\n')
			{
				buffer[cnt] = '\0';
				break;
			}
			
			// convert to uppercase
			if (isalpha(buffer[cnt]))
			{
				buffer[cnt] = toupper(buffer[cnt]);
			}
			cnt++;
		}

		// output "Processing command 'cmd'"
		printf("Processing cmd %s\n", buffer);

		// break the loop on `QUIT`
		if (strcmp(buffer,"QUIT") == 0)
		{
			return 0;
		}
	}
	return 0;
}
