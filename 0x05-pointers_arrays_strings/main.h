#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - print character on stdout
 * @n: char 
 */
int _putchar(char c);

/**
 * reset_to_98 - reset pointed variable value
 * @n: pointer
 */
void reset_to_98(int *n);

/**
 *swap_int - swap two integer
 *@a: integer
 *@b:integer
 */
void swap_int(int *a, int *b);

/**
 * _atoi - convert string to int
 * @s: string for conversion
 * Return: integer
 */

/**
 * main - return the lenght if string
 * @s: string
 */
int _strlen(char *s);

/**
 * _puts - puts string on stdout
 * @str: string
 */

void _puts(char *str);

/**
 * print_rev - print string in reverse
 * @s: string
 */
void print_rev(char *s);

/**
 * rev_string - reverse a given string
 * @s: string
 */
void rev_string(char *c);

/**
 * _puts2 - print every second character from  a given string
 * @str:string
 */
void _puts2(char *str);

/*puts_half - half of a given string
 * @str: string
 */
void puts_half(char *str);

/**
 * print _array - print n element of array
 * @a: array value
 * @n:element
 */
void print_array(int *a, int *n);

/**
 * _strcpy - copies a given string to pointed destination
 * @dest: copy to this buffer
 * @src: source
 */
char *_strcpy(char *dest, char *src);

int _atoi(char *s);
#endif
