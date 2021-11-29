/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:24:34 by bade-lee          #+#    #+#             */
/*   Updated: 2021/11/29 13:24:47 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

//          ----------========== {   INCLUDES   } ==========----------

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"

//          ----------========== {     FCTS     } ==========----------

int	ft_printf(const char *param, ...);
int	param_c(int *counter, va_list params);
int	param_s(int *counter, va_list params);
int	param_p(int *counter, va_list params);
int	param_d(int *counter, va_list params);
int	param_i(int *counter, va_list params);
int	param_u(int *counter, va_list params);
int	param_xlow(int *counter, va_list params);
int	param_xup(int *counter, va_list params);
int	param_prc(int *counter);

#endif