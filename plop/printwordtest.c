/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printwordtest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 03:20:45 by mmartine          #+#    #+#             */
/*   Updated: 2017/07/18 21:38:48 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
	if (!(tab = (char**)malloc(sizeof(*tab) * (ft_countword(str)))))
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
	if(!(tab[i] = (char*)malloc(sizeof(**tab) * (1))))
		return (NULL);
	*tab[i] = '\0';
	return (tab);
}

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i][j] != '\0')
	{
		while (tab[i][j] != '\0')
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
int main(int argc, char ** argv)
{
	char **tab;
	(void)argc;
	tab = ft_split_whitespaces(argv[1]);
	//	ft_print_words_tables(tab);
	while(**tab != 0)
	{
		printf("%s\n", *tab);
		tab++;
	}
	return (0);

}
