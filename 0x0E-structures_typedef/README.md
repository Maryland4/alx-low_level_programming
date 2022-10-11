Structures and Typedef

This project is about the use of structures and Typedef in C

dog.h: This is the  Header file that defines a new type struct dog with the following elements:

char *name
float age
char *owner

1-init_dog.c: C function that initializes a variable of type struct dog.

2-print_dog.c: a function that prints a struct dog
Prototype: void print_dog(struct dog *d);
Format: see example bellow
You are allowed to use the standard library
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.

dog.h: Header file that defines a new type dog_t as a new name for the type struct dog.

4-new_dog.c: C function that creates a dog.
You have to store a copy of name and owner
Returns NULL if the function fails.

5-free_dog.c: C function that frees dogs.

