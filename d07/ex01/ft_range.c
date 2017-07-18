/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 13:44:20 by mmartine          #+#    #+#             */
/*   Updated: 2017/07/17 15:37:09 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *res;
	int  i;

	i = 0;
	if ((min - max) <= 0)
		return (NULL);
	if (!(res = (int*)malloc(sizeof(*res) * (max - min))))
		return (0);
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}
