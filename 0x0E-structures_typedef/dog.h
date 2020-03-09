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
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
