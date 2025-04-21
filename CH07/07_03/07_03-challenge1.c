#include <stdio.h>

int main()
{
	char string[] = "Nifty TEXT! 123\n";

	int cnt = 0; 
	while (string[cnt] != '\0')
	{
		if (isupper(string[cnt]))
		{
			printf("%c", tolower(string[cnt])); 
		}
		else if(islower(string[cnt]))
		{
			printf("%c", toupper(string[cnt]));
		}
		else
		{
			printf("%c", string[cnt]);
		}
		cnt++;
	}

	return(0);
}
