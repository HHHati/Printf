/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:47:32 by bade-lee          #+#    #+#             */
/*   Updated: 2021/12/01 14:40:07 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;

	if (fd < 0)
		return ;
	if (n < 0)
	{
		i = -n;
		ft_putchar_fd(('-'), fd);
	}
	else
	{
		i = n;
	}
	if (i > 9)
	{
		ft_putnbr_fd((i / 10), fd);
		i %= 10;
	}
	ft_putchar_fd((i + '0'), fd);
}
