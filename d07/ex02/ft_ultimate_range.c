/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 14:07:22 by mmartine          #+#    #+#             */
/*   Updated: 2017/07/17 15:44:35 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *res;
	int i;
	int size;

	size = max - min;
	i = 0;
	if (min >= max)
	{
		res = (void*)0;
		return (0);
	}
	if(!(res = (int*)malloc(sizeof(res) * (max - min))))
		return (0);
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (size);
}
