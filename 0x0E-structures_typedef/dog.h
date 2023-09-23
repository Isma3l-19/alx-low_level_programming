#ifndef dog_h
#define dog_h

/**
 * struct dog - A structure representing information about a dog.
 * @name: The name of the dog (a string).
 * @age: The age of the dog (a floating-point number).
 * @owner: The owner of the dog (a string).
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
