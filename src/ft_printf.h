#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "../libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_formats(va_list args, const char format);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_print_ptr(unsigned long long ptr);
int		ft_printnbr(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hex(unsigned int num, const char format);
int		ft_printpercent(void);
int		ft_ptr_len(unsigned int num);
int		ft_num_len(unsigned	int num);
int		ft_hex_len(unsigned	int num);
void	ft_put_ptr(unsigned int num);
void	ft_put_hex(unsigned int num, const char format);
char	*ft_uitoa(unsigned int n);

#endif
