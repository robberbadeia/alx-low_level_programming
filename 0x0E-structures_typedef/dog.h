#ifndef DOG_H
#define DOG_H
/**
 *struct dog - creat a dog struct
 *@name: pointer
 *@age: float number
 *@owner: pointer
 *Description: dog struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
/**
 *dog_t - Typedef for dog struct
 *
 */
typedef struct dog dog_t;
#endif
