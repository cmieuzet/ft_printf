/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmieuzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:13:43 by cmieuzet          #+#    #+#             */
/*   Updated: 2022/04/22 11:20:39 by cmieuzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_whatis(va_list ap, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(ap, int));
	else if (format == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if (format == 'p')
		len += ft_putptr(va_arg(ap, void *));
	else if (format == 'd' || format == 'i')
		len += ft_putnbr(va_arg(ap, int));
	else if (format == 'u')
		len += ft_putnbr_uns(va_arg(ap, unsigned int));
	else if (format == 'x')
		len += ft_puthexa(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (format == 'X')
		len += ft_puthexa(va_arg(ap, unsigned int), "0123456789ABCDEF");
	else if (format == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		len;

	va_start(ap, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_whatis(ap, str[i + 1]);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (len);
}
