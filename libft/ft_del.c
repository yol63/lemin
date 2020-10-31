/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 16:49:30 by sassassi          #+#    #+#             */
/*   Updated: 2019/12/10 16:51:42 by sassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_del(char **g_int_part, char **g_frac_part)
{
	ft_strdel(g_int_part);
	ft_strdel(g_frac_part);
}
