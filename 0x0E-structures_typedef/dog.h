#ifndef DOGH
#define DOGH

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - dog information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the name of the owner
 *
 * Description: dog struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
