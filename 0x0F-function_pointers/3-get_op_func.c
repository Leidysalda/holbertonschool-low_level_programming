#include <stdlib.h>
#include "function_pointers.h"
/**
 * op_add - adicion
 * @a: number 1
 * @b: number 2
 *
 *
 *Return: Always 0.
 */
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
};
int i;
