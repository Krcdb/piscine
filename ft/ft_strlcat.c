/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 18:57:42 by mmartine          #+#    #+#             */
/*   Updated: 2017/07/12 23:47:09 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_length(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int ldest;
	unsigned int lsrc;

	lsrc = ft_length(src);
	ldest = ft_length(dest);
	size -= ldest + 1;
	if (size == 0)
		return (lsrc + ldest);
	if (lsrc > size)
		lsrc = size;
	i = ldest;
	j = 0;
	while (j < lsrc)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (ldest + ft_length(src));
}
