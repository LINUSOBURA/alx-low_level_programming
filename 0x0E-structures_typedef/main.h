#ifndef MAIN_H
#define MAIN_H
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void dog_t *new_dog(char *name, float age, char *owner);
int _putchar(char c);
#endif
