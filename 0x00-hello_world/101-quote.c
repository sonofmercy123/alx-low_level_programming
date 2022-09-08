#include <stdio.h>                                                              

#include <unistd.h>  

/**
 * main  - print the string in the function 
 *
 * Discription: using the main function
 * this program prints "programming is like a building multilingual function
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	return (1);
}
