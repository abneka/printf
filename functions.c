#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * op_string - Print Integer
 * @form: name va_list
 *
 * Return: Nothing.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * op_string - Print Integer
 * @form: name va_list
 *
 * Return: Nothing.
 */

int op_string(va_list form)
{
	int lenghts;
	char *str = va_arg(form, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	lenghts = 0;
	while (str[lenghts])
	{
		lenghts += _putchar(str[lenghts]);
	}
	return (lenghts);
}
/**
 * op_reverse - print character
 * @form: name of va_list
 *
 * Return: Nothing.
 */
int  op_reverse(va_list form)
{
	int i = 0, lenghtr = 0;
	char *str = va_arg(form, char *);

	while (str[i] != '\0')
	{
		i++;
	}
	lenghtr = i;
	i--;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	return (lenghtr);
}
/**
 * op_character - print character
 * @form: name of va_list
 *
 * Return: Nothing.
 */

int op_character(va_list form)
{
	int lenghtc = 0;

	lenghtc = _putchar(va_arg(form, int));
	return (lenghtc);
}


/**
 * op_integer - print integer numbers
 * @form: name of va_list
 *
 * Return: Nothing.
 */

int op_integer(va_list form)
{
	int integer = va_arg(form, int);
	int div = 1;
	int lenghti = 0;
	unsigned int number;

	if (integer < 0)
	{
		lenghti += _putchar('-');
		number = integer * -1;
	}
	else
		number = integer;

	while (number / div > 9)
		div *= 10;

	while (div != 0)
	{
		lenghti += _putchar('0' + number / div);
		number %= div;
		div /= 10;
	}

	return (lenghti);
}
