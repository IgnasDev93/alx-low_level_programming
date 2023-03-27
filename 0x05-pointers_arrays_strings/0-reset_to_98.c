#include "main.h"
#include <stdio.h>

/**
*main - check the code
*
*Return: Always 0
*/
int main(void)
{
  int n;
  n = 402
  printf("=%d\n", n);
  reset_to_98(&n);
  printf("n=%d\n", n);
  return (0);
}

/**
 * reset_to_98 - takes a pointer to a parameter and updates its value.
 * @n: input integer.
 * Return: no return.
 */

void reset_to_98(int *n)
{
 *n = 98;
}
