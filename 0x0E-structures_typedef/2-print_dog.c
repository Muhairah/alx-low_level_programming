#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: stucr dog to print
 * Description: element of d is NULL,(if name is NULL, print Name: (nil))
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nill)";
	if (d->owner == NULL)
		d->owner = ("nill");

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
