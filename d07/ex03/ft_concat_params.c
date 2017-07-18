/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 18:13:35 by mmartine          #+#    #+#             */
/*   Updated: 2017/07/17 18:40:03 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *tab)
{
	int i;
	int l;

	i = 0;
	l = 0;
	while (tab[i] != '\0')
	{
		l++;
		i++;
	}
	return (l);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		length;
	char	*tab;

	k = 0;
	i = -1;
	length = 0;
	while (++i < argc)
		length += ft_strlen(argv[i]);
	i = -1;
	if (!(tab = (char*)malloc(sizeof(*tab) * length)))
		return (0);
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			tab[k++] = argv[i][j++];
		if (i < argc - 1)
			tab[k++] = '\n';
		else
			tab[k] = '\0';
	}
	return (tab);
}
