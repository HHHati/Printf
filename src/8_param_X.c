/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8_param_X.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:18:31 by bade-lee          #+#    #+#             */
/*   Updated: 2021/11/29 13:20:26 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_check(char *str)
{
	int	n;
	int	i;

	n = 1;
	i = ft_strlen(str);
	if (i == 0 || i == 1)
	{
		return (0);
	}
	while (n != i)
	{
		if (str[n] == '+' || str[n] == '-' || str[n] == str[n + 1])
		{
			return (0);
		}
		n++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base, int *counter)
{
	unsigned int	n;
	unsigned int	i;

	if (ft_check(base) == 1)
	{
		i = ft_strlen(base);
		if (nbr < 0)
		{
			n = -nbr;
			ft_putchar_fd('-', 1);
			*counter = *counter + 1;
		}
		else
		{
			n = nbr;
		}
		if (n > i - 1)
		{
			ft_putnbr_base(n / i, base, counter);
			*counter = *counter + 1;
			n %= i;
		}
		ft_putchar_fd(base[n], 1);
	}
}

int	param_xup(int *counter, va_list params)
{
	const int	nb = (int) va_arg(params, int);

	ft_putnbr_base(nb, "0123456789ABCDEF", counter);
	return (1);
}
