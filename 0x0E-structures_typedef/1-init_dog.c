#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initialize a variable
 * @d: pointer
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: init_dog  initialization of d pointer for (name,age, owner)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)

	d->name = name;
	/**@*d:initializ of (name,age, owner)*/

	d->age = age;
	d->owner = owner;
}
