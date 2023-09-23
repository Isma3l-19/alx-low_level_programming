#include "dog.h"
/**
 * init_dog - initializes a variable of the type struct dog
 * @d: *structure
 * @name: *dog name
 * @age: dog's age
 * @owner: *owners dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
