#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
	struct my_struct
	{
		int struct_int; 
		int struct_char; 
	};

	int arr_size = 26;
	struct my_struct *struct_arr[arr_size];  
	char letter = 'A'; 
	for (int i = 0; i < arr_size; i++)
	{
		struct_arr[i] = malloc(sizeof(struct my_struct));
		struct_arr[i]->struct_int = i; 
		struct_arr[i]->struct_char = letter++; 
		printf("For count %d, struct's int value is: %d, struct's char value is: %c\n",i, struct_arr[i]->struct_int, struct_arr[i]->struct_char);
	}

	for (int i = 0; i < arr_size; i++)
	{
		free(struct_arr[i]);
	}

	return 0;
}
