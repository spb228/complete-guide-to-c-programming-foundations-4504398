#include <stdio.h>
#include <string.h>

struct ShoppingItem
{
	float price; 
	char name[32]; 
	int quant; 
};

int main()
{
	struct ShoppingItem item1; 
	item1.price = 10.333; 
	strcpy(item1.name, "Apples");
	item1.quant = 5; 

	printf("I am buying %d %s and they are %.2f each.",item1.quant, item1.name, item1.price);

	return 0;
}
