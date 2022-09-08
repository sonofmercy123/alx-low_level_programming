#include <unistd.h>   

/* main - Print the string in the function
 *
 * Description: using the main function 
 * this program prints "and that piece of art is useful" - Dora Korpar, 2015-10-19"
 * followed by a new line, to standard error.
 * Return: Always 1 (succes)
 */
int main(void)
{       
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",    
	        sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));                                                                         
	return (1);
}
