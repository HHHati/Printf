/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_param_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:18:20 by bade-lee          #+#    #+#             */
/*   Updated: 2021/11/30 10:58:37 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	param_d(int *counter, va_list params)
{
	const int	i = (int) va_arg(params, int);

	ft_putnbr_fd(i, 1);
	*counter = *counter + ft_strlen(ft_itoa(i));
	return (1);
}
