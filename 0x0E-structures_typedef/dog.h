#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog details header file
 * @name: name of dog
 * @age: how old dog is
 * @owner: name of owner
 * Return: retun 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
