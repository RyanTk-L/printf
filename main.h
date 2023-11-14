#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

unsigned int _strlen(char *s);
char _get_type(char c);
int _printf(const char *format, ...);
char *_intToString(int i, unsigned int *len);
unsigned int intlen(int i);

/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;
int main(void);
int _putchar(char c);
int _printf(const char *format, ...);
int print_percentage(void);
int p_char(va_list v);
int p_string(va_list v);
int _strlens(char *s);
int _strlen_c(const char *s);
int p_integer(va_list args);
int p_decimal(va_list args);
int print_hex2(unsigned long int num);
int p_binary(va_list v);
int p_unsigned(va_list args);
int print_o(va_list v);
int print_hexd(va_list v);
int print_string(va_list v);
int _pointer(va_list v);
int print_hexadecimal(unsigned long int num);
int reverse_string(va_list args);
int _rot13(va_list args);

#endif
