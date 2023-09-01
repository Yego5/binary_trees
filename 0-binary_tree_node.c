#include "my_binary_converter.h"
#include <stdlib.h>

/**
 * my_binary_to_uint - Convert a binary string to an unsigned integer
 * @binary_str: The input binary string
 *
 * Return: The decimal value of the binary string, or 0 if invalid input
 */
unsigned int my_binary_to_uint(const char *binary_str)
{
    unsigned int index, length;
    unsigned int decimal_value;

    index = length = decimal_value = 0;

    if (binary_str == NULL)
        return (0);

    // Check if the string contains only '0' and '1' characters
    while (binary_str[length] != '\0')
    {
        if (binary_str[length] == '0' || binary_str[length] == '1')
            length++;
        else
            return (0);
    }

    // Convert the binary string to an unsigned integer
    while (index < length)
    {
        decimal_value = decimal_value << 1;
        if (binary_str[index] == '1')
            decimal_value += 1;
        index++;
    }

    return (decimal_value);
}
//@yego
