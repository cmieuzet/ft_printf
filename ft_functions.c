/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmieuzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:29:50 by cmieuzet          #+#    #+#             */
/*   Updated: 2022/04/22 01:56:47 by cmieuzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		i += ft_putstr("(null)");
		return (i);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putnbr(int nbr)
{
	int	len;

	len = 0;
	if (nbr == -2147483648)
	{
		len += ft_putstr("-2147483648");
		return (len);
	}
	if (nbr < 0)
	{
		len += ft_putchar('-');
		nbr *= (-1);
	}
	if (nbr > 9)
	{
		len += ft_putnbr(nbr / 10);
		len += ft_putchar(nbr % 10 + '0');
	}
	else
		len += ft_putchar(nbr + 48);
	return (len);
}

int	ft_putnbr_uns(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr > 9)
	{
		len += ft_putnbr_uns(nbr / 10);
		len += ft_putchar(nbr % 10 + '0');
	}
	else
		len += ft_putchar(nbr + 48);
	return (len);
}
