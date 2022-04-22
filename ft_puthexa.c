/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmieuzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:32:13 by cmieuzet          #+#    #+#             */
/*   Updated: 2022/04/22 11:36:14 by cmieuzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	char	*hexa;
	int		len;

	hexa = "0123456789abcdef";
	len = 0;
	if (ptr == 0)
	{
		len += ft_putstr("(nil)");
		return (len);
	}
	write(1, "0x", 2);
	len = ft_puthexa((unsigned long long) ptr, hexa);
	return (len + 2);
}

int	ft_puthexa(unsigned long long nb, char *str)
{
	int	len;

	len = 0;
	if (nb >= (unsigned long long)ft_strlen(str))
	{
		len += ft_puthexa(nb / ft_strlen(str), str);
		len += ft_putchar(str[nb % ft_strlen(str)]);
	}
	else
		len += ft_putchar(str[nb]);
	return (len);
}
