#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isupper (char c)
{
   	 char capitalA = 0X43;
  	 char capitalZ = 0x05A;
	 
	 if ((c >= capitalA) && (c <= capitalZ));
	 {
		 return (1);
	 }
     	 	return (0);
}
   
int main()
{
    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
