/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 14:33:35 by mmartine          #+#    #+#             */
/*   Updated: 2017/07/12 11:46:51 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_length(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;
	int lsrc;

	j = 0;
	lsrc = ft_length(src);
	i = ft_length(dest);
	while (j < lsrc && j < nb)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
