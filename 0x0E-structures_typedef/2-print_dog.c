#include <stdio.h>
#include "puppy.h"

/**
 * display_puppy - display puppy data
 * @p: struct for puppy in puppy.h
 * Return: 0.
 */
void display_puppy(struct puppy *p)
{
	if (p == NULL)
	{
		return;
	}

	printf("Name: %s\n", (p->puppy_name != NULL) ? p->puppy_name : "(nil)");
	if (p->puppy_age < 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", p->puppy_age);
	}
	printf("Owner: %s\n", (p->caretaker != NULL) ? p->caretaker : "(nil)");
}
