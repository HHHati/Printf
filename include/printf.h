/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:24:34 by bade-lee          #+#    #+#             */
/*   Updated: 2021/11/25 10:45:51 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

//          ----------========== {   INCLUDES   } ==========----------

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

//          ----------========== {     FCTS     } ==========----------

int	ft_printf(const char *param, ...);
int	ft_param1c(va_arg(list, int));
int	ft_param2s(va_arg(list, int));
int	ft_param3p(va_arg(list, int));
int	ft_param4d(va_arg(list, int));
int	ft_param5i(va_arg(list, int));
int	ft_param6u(va_arg(list, int));
int	ft_param7x(va_arg(list, int));
int	ft_param8X(va_arg(list, int));
int	ft_param9prc(va_arg(list, int));

#endif