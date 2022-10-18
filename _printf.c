#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _printf - a function that produces output according to a format
 * @format: format
 * Return: char
 */
int _printf(const char *format, ...)
{
	va_list list;
	char *ten;
	int i = 0, a, b, c = 0, d = 1;

	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[++i])
			{
				case 'c':
					_putchar((char) va_arg(alist, int));
					break;
				case '%':
					_putchar('%');
					break;
				case 's':
					ten = va_arg(list, char*);
					while (*ten)
						_putchar(*ten++);
					break;
				case 'd':
					a = (va_arg(list, int);
						print_number(a);
					break;
				case 'i':
					a = va_arg(list, int);
						print_number(a);
					break;
				case 'b':
					a = va_arg(list, int);
					if (a == 0)
						_putchar(a);
					if (a > 0)
					{
						while (a != 0)
						{
							b = a % 2;
							a /= 2;
							dd
