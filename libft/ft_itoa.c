/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 20:47:33 by yabuzano          #+#    #+#             */
/*   Updated: 2026/10/19 12:04:48 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*pre_conv(int len)
{
	char	*tmp;

	tmp = malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	tmp[0] = '0';
	return (tmp);
}

static int	int_len(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	i;
	char	*res;
	long	nbr;

	nbr = n;
	len = int_len(nbr);
	res = pre_conv(len);
	if (!res)
		return (NULL);
	if (nbr < 0)
		nbr = -nbr;
	i = len - 1;
	while (nbr != 0)
	{
		res[i] = ((nbr % 10) + 48);
		nbr = nbr / 10;
		i--;
	}
	if (n < 0)
		res[0] = '-';
	res[len] = 0;
	return (res);
}
/*
int	main(void)
{
	printf("%s", ft_itoa(2147483647));
}*/
