#include <stdio.h>

int main()
{

	int userAge; // only declaring an integer variable
	int votingAge = 18; // Declaring and initializing
	
	printf("userAge, address:%p  value:%d\n", &userAge, userAge);
	printf("votingAge, address:%p  value:%d\n", &votingAge, votingAge);

	return 0;
}
