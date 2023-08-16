### 0x0F. C - Function pointers
## Tasks
* Write a function that prints a name.
* Write a function that executes a function given as a parameter on each element of an array.
* Write a function that searches for an integer.
* Write a program that performs simple operations.
* Write a program that prints the opcodes of its own main function.

## Prototypes
* void print_name(char *name, void (*f)(char *));
* void array_iterator(int *array, size_t size, void (*action)(int));
* int int_index(int *array, int size, int (*cmp)(int));
* int (*get_op_func(char *s))(int, int);
* 
