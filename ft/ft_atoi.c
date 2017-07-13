/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 17:29:43 by mmartine          #+#    #+#             */
/*   Updated: 2017/07/11 01:48:31 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_result(char *str, int i)
{
	int result;

	result = str[i] - 48;
	i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result);
}

int		ft_atoi(char *str)
{
	int i;
	int result;
	int neg;

	i = 0;
	neg = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == 9)
		i++;
	if ((str[i] == '-') && (((str[i + 1] >= '0') && (str[i + 1] <= '9'))))
	{
		neg = -1;
		i++;
	}
	if ((str[i] == '+') && ((str[i + 1] >= '0') && (str[i + 1] <= '9')))
		i++;
	if ((str[i] < '0') || (str[i] > '9'))
		return (0);
	else
		result = ft_result(str, i);
	return (result * neg);
}
