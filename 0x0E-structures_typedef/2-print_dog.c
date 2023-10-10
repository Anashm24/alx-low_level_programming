#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: the dog to print
 *
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("");
	}
	if (name == NULL)
	{
		printf("Name: (nil)");
	}
	if (age == NULL || owner == NULL)
	{
		printf("(nil)")
	}
	printf("%s\n %lf\n %s", d->name, d->age, d->owner);
}
