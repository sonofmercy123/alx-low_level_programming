#include <stdio.h>

#include <unistd.h>

/**
 * main - print the string in the function
 * 
 * Discription: using the main function
 * this program prints "and that piece of art is useful
 * Return: 1
 */   
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	return (1);
}
