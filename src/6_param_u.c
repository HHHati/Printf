/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6_param_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:18:26 by bade-lee          #+#    #+#             */
/*   Updated: 2021/11/30 10:58:43 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	param_u(int *counter, va_list params)
{
	const unsigned int	i = (unsigned int) va_arg(params, int);

	ft_putnbr_fd(i, 1);
	*counter = *counter + ft_strlen(ft_itoa(i));
	return (1);
}
