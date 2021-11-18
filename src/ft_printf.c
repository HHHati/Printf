/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:43:59 by bade-lee          #+#    #+#             */
/*   Updated: 2021/11/18 15:19:09 by bade-lee         ###   ########.fr       */
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

int	ft_printf(const char *param, ...)
{
	static char	*input = "cspdiuxX%";
	size_t		i;

	i = 0;
	while (param[i])
	{
		if (param[i] == '%' && ft_strchr(input, param[i + 1]))
		{
			ft_putspace();
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
	printf("%s\n", "premier test :");
	ft_printf("AAAA%dAAAA%%AAAA%iAAAA");
}
