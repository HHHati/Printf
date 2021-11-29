/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_param_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:18:15 by bade-lee          #+#    #+#             */
/*   Updated: 2021/11/29 11:18:40 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	param_s(va_list params, int *counter)
{
	const char	*str = (char *) va_arg(params, char *);

	ft_putstr(str);
	*counter = *counter + ft_strlen(str);
	return (1);
}
