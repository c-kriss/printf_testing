#include "main.h"

int handle_d(const char *format, va_list args, int *count)
{
	int numbers = va_arg(args, int);
	int *i = &numbers;
	write(1, i, sizeof(numbers));

}
