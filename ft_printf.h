/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmieuzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:16:35 by cmieuzet          #+#    #+#             */
/*   Updated: 2022/04/22 11:38:06 by cmieuzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_whatis(va_list ap, char format);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putptr(void *ptr);
int	ft_putnbr(int nbr);
int	ft_putnbr_uns(unsigned int nbr);
int	ft_puthexa(unsigned long long nb, char *str);
int	ft_strlen(char *str);

#endif
