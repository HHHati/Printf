/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:24:34 by bade-lee          #+#    #+#             */
/*   Updated: 2021/11/29 12:04:36 by bade-lee         ###   ########.fr       */
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
int	param_c(va_list params, int *counter);
int	param_s(va_list params, int *counter);
int	param_p(va_list params, int *counter);
int	param_d(va_list params, int *counter);
int	param_i(va_list params, int *counter);
int	param_u(va_list params, int *counter);
int	param_xlow(va_list params, int *counter);
int	param_xup(va_list params, int *counter);
int	param_prc(va_list params, int *counter);

#endif