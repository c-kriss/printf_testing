fndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int handle_regular(const char *format, int *count);
int handle_s(const char *format, va_list args, int *count);
#endif
