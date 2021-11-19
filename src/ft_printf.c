/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:43:59 by bade-lee          #+#    #+#             */
/*   Updated: 2021/11/19 10:42:49 by bade-lee         ###   ########.fr       */
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

void	ft_apply_option(int param, const char *str)
{
	const char *options = {option0c(), option1s(), option2p(),
		option3d(), option4i(), option5u(), option6x(),
		option7X(), option8()}
}

int	ft_printf(const char *param, ...)
{
	static char	*options = "cspdiuxX%";
	size_t		i;

	i = 0;
	while (param[i])
	{
		if (param[i] == '%' && ft_strchr(options, param[i + 1]))
		{
			ft_apply_option(ft_strchr(options, param[i + 1]), param);
			i++;
		}
		else
		{
			write (1, &param[i], 1);
		}
		i++;
	}
	return (0);
}

int	main()
{
	ft_printf("AAAA%dAAAA%%AAAA%iAAAA");
}
