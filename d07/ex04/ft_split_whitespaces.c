/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 18:41:04 by mmartine          #+#    #+#             */
/*   Updated: 2017/07/19 16:32:19 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_countword(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		while ((*str == ' ' || *str == '\t' || *str == '\n') && *str)
			str++;
		if (*str >= 33 && *str <= 126 && *str)
		{
			i++;
			while (*str >= 33 && *str <= 126 && *str)
				str++;
		}
	}
	return (i);
}

int		ft_wordlength(char *str)
{
	int i;

	i = 0;
	while ((*str == ' ' || *str == '\t' || *str == '\n') && *str)
		str++;
	while ((*str >= 33 && *str <= 126) && *str)
	{
		i++;
		str++;
	}
	while ((*str == ' ' || *str == '\t' || *str == '\n') && *str)
		str++;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		size;
	char	**tab;

	i = 0;
	if (!(tab = (char**)malloc(sizeof(*tab) * (ft_countword(str) + 1))))
		return (NULL);
	while (*str)
	{
		while ((*str == ' ' || *str == '\t' || *str == '\n') && *str)
			str++;
		if (*str >= 33 && *str <= 126 && *str)
		{
			size = ft_wordlength(str);
			if (!(tab[i] = (char*)malloc(sizeof(**tab) * (size + 1))))
				return (NULL);
			while (*str >= 33 && *str <= 126 && *str)
				*tab[i]++ = *str++;
			*tab[i] = '\0';
			tab[i++] -= size;
		}
	}
	tab[i] = 0;
	return (tab);
}
