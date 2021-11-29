/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5_param_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:18:23 by bade-lee          #+#    #+#             */
/*   Updated: 2021/11/29 13:20:14 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	param_i(int *counter, va_list params)
{
	const int	i = (int) va_arg(params, int);

	ft_putnbr_fd(i, 1);
	*counter = *counter + ft_strlen(ft_itoa(i));
	return (1);
}
