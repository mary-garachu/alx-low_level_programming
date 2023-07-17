#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's infomation
 * @name: First object
 * @age: Second object
 * @owner: Third object
 *
 * Description: Longer description
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


#endif
