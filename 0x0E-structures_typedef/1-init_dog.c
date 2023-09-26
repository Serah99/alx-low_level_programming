#include <stdio.h>
#include "pet.h"

/**
 * initialize_pet - load variable of type struct pet
 * @p: struct for pet in pet.h
 * @pet_name: type char pointer
 * @pet_age: type float
 * @caretaker: type char pointer
 * Return: 0.
 */
void initialize_pet(struct pet *p, char *pet_name, float pet_age, char *caretaker)
{
	if (p != NULL)
	{
		p->pet_name = pet_name;
		p->pet_age = pet_age;
		p->caretaker = caretaker;
	}
}
