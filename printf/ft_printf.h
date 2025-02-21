/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:04:23 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024/10/31 17:12:29 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int		ft_putstr(char *s);
int		ft_putchar(int c);
int		ft_put_hex_ptr(size_t n, const char format, int is_ptr);
int		ft_printf(char const *s, ...);
int		ft_conver(va_list args, const char format);

#endif