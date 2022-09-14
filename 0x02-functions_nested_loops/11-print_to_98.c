#include <stdio.h>

/**
* print_to_98 – Prints all natural numbers from input to 98,
* in order separated by a comma followed by a space.
* @n: The number to begin counting at.
*/
void print_to_98(int n)
{
If (n >= 98)
{
While (n > 98)
Printf(“%d, “, n--);
Printf(“%d\n”, n);
}
Else
{
While (n < 98)
Printf(“%d, “, n++);
Printf(“%d\n”, n);
}
}
