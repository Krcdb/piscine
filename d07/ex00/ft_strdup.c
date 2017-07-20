/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 12:25:18 by mmartine          #+#    #+#             */
/*   Updated: 2017/07/20 10:19:00 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (!(res = (char*)malloc(sizeof(*res) * (i + 1))))
		return (NULL);
	else
	{
		while (src[j] != '\0')
		{
			res[j] = src[j];
			j++;
		}
		res[j] = '\0';
	}
	return (res);
}
