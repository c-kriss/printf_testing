#include "main.h"

int _printf(const char *format, ...)
{
        int count = 0;

        va_list args;

        va_start(args, format);
        while (format)
        {
                if (format != "%")
                {
                        count += handle_regular(format, &count);
                        format++;

                }
                else
                {
                        format++;
                }
        }
        return count;
}
