#ifndef _MAIN_H
#define _MAIN_H

/**
 * _putchar: write to stdout
 * @c: character to print
 *
 *
 * Return : 1 on success
 */
int _putchar(char c);

/**
 * print alphabet
 */
void print_alphabet();

/**
 * print_alphabet_x10- print alphabet ten times
 */
void print_alphabet_x10();

/**
 * _islower - checks for lower
 * @c -entered character to check
 * Return: int
 */

int _islower(int c);

/**
 * _isalpha - check for alphabet character
 * @c: character to check
 * Return: 1 if uper or lower
 */

int _isalpha(int c);

/**
 * print_sign - sign of a number
 * @n: number to check
 * Return: ->0<+
 */
int print_sign(int n);

/**
 * _abs -absolute value
 * @int: integre
 * Return: number
 */
int _abs(int);


/**
 * print_last_digit - print last digit
 * Return: last digit
 */
int print_last_digit(int n);



#endif 
