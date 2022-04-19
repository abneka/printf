#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * op_rot13 - Print Integer
 * @form: name va_list.
 *
 * Return: Nothing.
 */

int op_rot13(va_list form)
{
	int lenght = 0;
	int i, j;
	char *s = va_arg(form, char *);

	char x[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char y[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 53; j++)
		{
			if (s[i] == x[j])
			{
				lenght += _putchar(y[j]);
				break;
			}
			if (j == 53)
			{
				lenght += _putchar(s[i]);
			}
		}

	}
	return (lenght);
}
