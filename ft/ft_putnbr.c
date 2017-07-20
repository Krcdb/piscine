/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 22:13:42 by mmartine          #+#    #+#             */
/*   Updated: 2017/07/20 11:09:12 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long lnb;

	lnb = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		lnb = -lnb;
	}
	if (lnb < 10)
		ft_putchar(lnb + 48);
	else
	{
		ft_putnbr(lnb / 10);
		ft_putchar((lnb % 10) + 48);
	}
}
