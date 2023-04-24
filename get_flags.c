#include "main.h"

/**
 * get_flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @j: take a parameter.
 * Return: Flags:
 */
int get_flags(const char *format, int *j)
{
/* - + 0 # ' ' */
/* 1 2 4 8  16 */
int g, curr_j;
int flags = 0;
const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

for (curr_j = *j + 1; format[curr_j] != '\0'; curr_j++)
{
for (g = 0; FLAGS_CH[g] != '\0'; g++)
if (format[curr_j] == FLAGS_CH[g])
{
flags |= FLAGS_ARR[g];
break;
}

if (FLAGS_CH[g] == 0)
break;
}

*j = curr_j - 1;

return (flags);
}
