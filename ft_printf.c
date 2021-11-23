/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:43:59 by bade-lee          #+#    #+#             */
/*   Updated: 2021/11/23 12:05:43 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (0);
}

void	ft_putspace(void)
{
	write(1, " ", 1);
}

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
	va_list		list;

	i = 0;
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
		}
		i++;
	}
	va_end(list);
	return (0);
}

int	main()
{
	ft_printf("AAAA%dAAAA%%AAAA%iAAAA");
}
