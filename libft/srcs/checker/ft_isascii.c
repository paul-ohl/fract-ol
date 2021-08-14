/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:25:14 by pohl              #+#    #+#             */
/*   Updated: 2021/04/19 11:19:39 by ft               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	ft_isascii(const int c)
{
	if (c >= 0 && c <= 127)
	{
		return (true);
	}
	return (false);
}
