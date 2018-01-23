#include <stdio.h>

int main()
{
	// Take two integers from the user
	int x;
	int y;

	printf("Enter an integer\n");
	scanf("%d", &x);	
	printf("Enter an integer\n");
	scanf("%d", &y);	


	// Display their sum

	printf("Their sum is %d\n", x+y);
	// Display their difference

	printf("Their difference is %d\n", x-y);

	//Display their product
	
	printf("Their sum is %d\n", x*y);
	//Display the quotient
	printf("Their division is %d\n", x/y);
	//Get the remainder with the modulus %___
	printf("Their remainder is %d\n", x%y);
	
	
	return 0;
}


