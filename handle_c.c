#include "main.h"

int handle_c(const char *format, va_list args, int *count)
{
	int c = va_arg(args, int);
	write(1, &c, 1);
	count += 1;
}

