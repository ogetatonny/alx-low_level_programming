#include <unistd.h> 
 
/** 
 * _putchar -function that writes char c to stdiout 
 * @c: character to be printed
 * Return: On success 1. 
 * On error, -1 is returned
 */ 
int _putchar(char c) 
{ 
 return (write(1, &c, 1)); 
} 

