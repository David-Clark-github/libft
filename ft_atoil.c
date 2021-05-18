/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoil.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 21:14:12 by dclark            #+#    #+#             */
/*   Updated: 2021/05/16 09:06:22 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoil(const char *nptr)
{
	long	res;
	int		index;
	int		signe;

	res = 0;
	index = 0;
	signe = 1;
	while ((nptr[index] >= '\t' && nptr[index] <= '\r') || nptr[index] == ' ')
		index++;
	if (nptr[index] == '-')
		signe *= -1;
	if (nptr[index] == '-' || nptr[index] == '+')
		index++;
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		res = (res * 10) + nptr[index] - '0';
		index++;
	}
	return (res * signe);
}
