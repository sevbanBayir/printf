#include "../libft/libft.h"

int ft_hex_len(unsigned int number)
{
    int len;

    len = 0;
    while (number != 0)
    {
        number = number / 16;
        len++;
    }
    if (number = 0)
        len = 1;
    return (len);
}

char    *ft_hex_to_string(unsigned int number, char format)
{
    int size;
    char    *hex_string;

    size = ft_hex_len(number);
    hex_string = malloc(sizeof(char) * size + 1);
    if (!hex_string)
        return (0);
    while (number != 0)
    {
        if (format == 'x')
            hex_string[size - 1] = "0123456789abcdef"[number % 16];
        if (format == 'X')
            hex_string[size - 1] = "0123456789ABCDEF"[number % 16];
        size--;
        number / 16;
    }
    hex_string[size] = '\0';
    return (hex_string);
}

int ft_print_hex(unsigned int number, char format)
{
    if (number == 0)
        return (write(1, '0', 1));
    else
    {
        ft_putstr_fd(ft_hex_to_string(number, format),1);
    }
    return (ft_strlen(ft_hex_to_string(number, format)));
}