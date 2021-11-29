/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_param_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:18:20 by bade-lee          #+#    #+#             */
/*   Updated: 2021/11/29 11:18:51 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	param_d(va_list params, int *counter)
{
	const int	i = (int) va_arg(params, int);

	ft_putnbr(i));
	*counter = *counter + ft_strlen(ft_itoa(i));
	return (1);
}
