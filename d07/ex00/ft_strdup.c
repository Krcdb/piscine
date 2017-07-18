/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 12:25:18 by mmartine          #+#    #+#             */
/*   Updated: 2017/07/18 02:33:49 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*res;
	int		i;

	i = 0;
	while (src[i])
		i++;
	if (!(res = (char*)malloc(sizeof(*res) * (i + 1))))
		return (NULL);
	else
	{
		while (src[i] != '\0')
		{
			res[i] = src[i];
			i++;
		}
		i++;
		res[i] = '\0';
	}
	return (res);
}
