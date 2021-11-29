/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6_param_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:18:26 by bade-lee          #+#    #+#             */
/*   Updated: 2021/11/29 11:19:03 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	param_u(va_list params, int *counter)
{
	const unsigned int	i = (unsigned int) va_arg(params, int);

	ft_putnbr(i));
	*counter = *counter + ft_strlen(ft_itoa(i));
	return (1);
}
