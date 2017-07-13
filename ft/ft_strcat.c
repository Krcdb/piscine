/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 12:59:04 by mmartine          #+#    #+#             */
/*   Updated: 2017/07/12 11:45:26 by mmartine         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;
	int lsrc;

	j = 0;
	lsrc = ft_length(src);
	i = ft_length(dest);
	while (j <= lsrc)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
