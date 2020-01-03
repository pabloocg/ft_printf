/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_bonus.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcuadrad <pcuadrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 13:50:09 by pcuadrad          #+#    #+#             */
/*   Updated: 2019/11/26 12:00:41 by pcuadrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_BONUS_H
# define PRINTF_BONUS_H

# include <stdio.h>
# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# define SETS "cspdiuxX%ngfe"
# define HEX "0123456789abcdef"

typedef __UINTPTR_TYPE__	t_uintptr;
typedef long long int		t_intmax;

typedef struct		s_printf
{
	int		minus;
	int		zero;
	int		space;
	int		plus;
	int		hash;
	int		width;
	int		precision;
	char	mask;
	char	conversion;
	va_list	argv;
	int		size;
	char	*format;
	char	*summary;
}					t_printf;

int					ft_printf(const char *format, ...);
void				processline(t_printf **bag);
t_printf			*initilialize(const char *format);
void				reinitialize(t_printf **bag);
int					destructor(char *format, t_printf **bag);
char				*ft_strldup(char *format);
void				check_flags(t_printf **bag);
void				check_precision(t_printf **bag);
void				check_width(t_printf **bag);
void				check_conversion(t_printf **bag);
void				executer(t_printf **bag);
void				putspaces(int nspaces);
void				putstr_printf(t_printf **bag);
int					ft_putnstr(t_printf **bag, char *str);
void				putchar_printf(t_printf **bag);
void				putpercent_printf(t_printf **bag);
void				putnbr_printf(t_printf **bag);
size_t				ft_nbrlen(t_intmax num);
void				putzeros(int nzeros);
size_t				ft_nbrlenprec(t_intmax num);
void				ft_putnbrprintfprec(t_intmax nb, t_printf **bag);
void				ft_putnbrprintf(t_intmax nb, t_printf **bag);
void				putnbr_print_0(t_printf **bag);
t_intmax			putnbr_check_zero(t_printf **bag);
void				putnbr_width_prec(t_printf **bag, int len, int neg);
void				putnbr_prec_len(t_printf **bag, int len);
void				putnbr_width_zeros(t_printf **bag, int len,
					int neg, t_intmax number);
void				putunsigned_printf(t_printf **bag);
size_t				ft_nbrulen(t_intmax num);
t_intmax			putunsigned_check_zero(t_printf **bag);
void				ft_putnbru(unsigned int nb, t_printf **bag);
void				puthex_printf(t_printf **bag);
size_t				ft_nbrhexlen(t_intmax num);
void				printf_hex(t_intmax number, t_printf **bag);
void				ft_putnbr_base(t_intmax nb, char *str, t_printf **bag);
void				putmemory_printf(t_printf **bag);
size_t				ft_nbrmemlen(uintptr_t num);
void				ft_putnbr_base_mem(uintptr_t nb, char *str, t_printf **bag);
void				printf_mem(uintptr_t number, t_printf **bag);
void				printf_0x(t_printf **bag);
int					puthex_hash(t_printf **bag);
void				putmemory_nill(t_printf **bag);
char				*ft_strchr(const char *s, int c);
char				*ft_substr(char const *s, unsigned int start, size_t len);
size_t				ft_strlen(const char *s);
int					ft_isdigit(int c);
void				ft_putchar(char c);
char				*ft_strdup(const char *src);
char				*ft_strcpy(char *dest, const char *src);
int					putnbr_plus_space_bonus(t_intmax number, t_printf **bag);
int					putnbr_plus_space2_bonus(t_intmax number, t_printf **bag);
void				putnbr_print_plus_space(int symbol,
					t_intmax number, t_printf **bag);
int					putnbr_plus_space3_bonus(t_intmax number, t_printf **bag);
void				putnbr_print_plus_space2(int symbol,
					t_intmax number, t_printf **bag);
void				putintpointer_printf(t_printf **bag);
#endif
