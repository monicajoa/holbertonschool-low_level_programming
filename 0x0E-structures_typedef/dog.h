#ifndef DOG
#define DOG


int _putchar(char c);

/**
 * struct dog - dog information
 * @name: dog's name
 * @owner: ownwe's name
 * @age: dog's age
 *
 * Description: Dog Information
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
