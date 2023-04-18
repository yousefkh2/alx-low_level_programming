#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - dog attributes
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: dog attributes
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
/* function prototypes */
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
