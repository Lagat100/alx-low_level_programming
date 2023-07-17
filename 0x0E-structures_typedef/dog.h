#include <stdio.h>
#include "dog.h"

/**
 * main - checks the code
 *
 * Return: Always 0.
 */
int main()
{
	struct dog myDog;
	
	myDog.name = "Buddy";
	myDog.age = 3.5;
	myDog.owner = "Lagat";

	printf("Name: %s\n", myDog.name);
	printf("Age: %.1f\n", myDog.age);
	printf("Owner: %s\n", myDog.owner);

	return 0;
}	
