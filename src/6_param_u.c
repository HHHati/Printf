/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6_param_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:18:26 by bade-lee          #+#    #+#             */
/*   Updated: 2021/11/30 11:38:06 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	param_u(int *counter, va_list params)
{
	char	*nb;

	nb = ft_itoa(va_arg(params, unsigned int));
	ft_putstr_fd(nb, 1);
	*counter = *counter + ft_strlen(nb);
	return (1);
}
