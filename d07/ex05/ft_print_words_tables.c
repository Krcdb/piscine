/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 02:23:34 by mmartine          #+#    #+#             */
/*   Updated: 2017/07/18 02:40:43 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	**ft_split_whitespaces(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_words_tables(char **tab)
{
	int i;

	i = 0;
	while (*tab)
	{
		while (**tab)
		{
			ft_putchar(**tab++);
			i++;
		}
		**tab -= i;
		i = 0;
		(*tab)++;
	}
}

