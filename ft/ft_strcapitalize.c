/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 22:55:32 by mmartine          #+#    #+#             */
/*   Updated: 2017/07/11 21:47:26 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_lower(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		return (1);
	else
		return (0);
}

int		ft_is_upper(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
		return (1);
	else
		return (0);
}

int		ft_is_alphanumeric(char *str, int i)
{
	if ((str[i] >= '0' && str[i] <= '9') || ft_is_lower(str, i)
			|| ft_is_upper(str, i))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (ft_is_lower(str, i))
		str[i] -= 32;
	while (str[i] != '\0')
	{
		if (ft_is_lower(str, i) && !ft_is_alphanumeric(str, i - 1))
			str[i] -= 32;
		if (ft_is_upper(str, i) && ft_is_alphanumeric(str, i - 1))
			str[i] += 32;
		i++;
	}
	return (str);
}
