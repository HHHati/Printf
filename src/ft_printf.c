/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:43:59 by bade-lee          #+#    #+#             */
/*   Updated: 2021/11/29 10:23:50 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_apply_param(int param)
{
	static int	(*function[10])() = {&ft_param1c, &ft_param2s,
		&ft_param3p, &ft_param4d, &ft_param5i, &ft_param6u,
		&ft_param7x, &ft_param8X, &ft_param9prc};

	function[param]();
}

int	ft_printf(const char *param, ...)
{
	static char	*options = "cspdiuxX%";
	size_t		i;
	size_t		counter;
	va_list		list;

	i = 0;
	counter = 0;
	va_start(list, param);
	while (param[i])
	{
		if (param[i] == '%' && ft_strchr(options, param[i + 1]))
		{
			ft_apply_param(ft_strchr(options, param[i + 1]));
			i++;
		}
		else
		{
			write (1, &param[i], 1);
			count++;
		}
		i++;
	}
	va_end(list);
	return (0);
}
