#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    char *name_copy, *owner_copy;
    int i, name_len, owner_len;

    /* allocate memory for the dog structure */
    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);

    /* find the length of name and owner */
    name_len = 0;
    while (name[name_len] != '\0')
        name_len++;
    owner_len = 0;
    while (owner[owner_len] != '\0')
        owner_len++;

    /* allocate memory for name and owner copies */
    name_copy = malloc(sizeof(char) * (name_len + 1));
    if (name_copy == NULL)
    {
        free(dog);
        return (NULL);
    }
    owner_copy = malloc(sizeof(char) * (owner_len + 1));
    if (owner_copy == NULL)
    {
        free(name_copy);
        free(dog);
        return (NULL);
    }

    /* copy name and owner to the allocated memory */
    for (i = 0; i <= name_len; i++)
        name_copy[i] = name[i];
    for (i = 0; i <= owner_len; i++)
        owner_copy[i] = owner[i];

    /* assign the values to the dog structure */
    dog->name = name_copy;
    dog->age = age;
    dog->owner = owner_copy;

    return (dog);
}
