#ifndef STRUCT_DOG

#define STRUCT_DOG
/**
 * struct dog - dog data structer
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
