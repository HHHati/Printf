/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_param_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:18:08 by bade-lee          #+#    #+#             */
/*   Updated: 2021/11/29 11:18:33 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	param_c(va_list params, int *counter)
{
	const char	c = (char) va_arg(params, char);

	write(1, &c, 1);
	*counter = *counter + 1;
	return (1);
}
