/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_param_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:18:15 by bade-lee          #+#    #+#             */
/*   Updated: 2021/11/29 12:48:58 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	param_s(va_list params, int *counter)
{
	const char	*str = (char *) va_arg(params, char *);

	ft_putstr_fd((char *)str, 1);
	*counter = *counter + ft_strlen(str);
	return (1);
}
