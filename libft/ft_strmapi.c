/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 20:41:13 by yabuzano          #+#    #+#             */
/*   Updated: 2026/10/19 20:55:55 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static char	testfunc(unsigned int index, char c)
{
	while (index--);
	c++;
	return (c);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	index;

	if (!s || !f)
		return (NULL);
	newstr = (char *)malloc(ft_strlen(s) + 1);
	if (!newstr)
		return (NULL);
	index = 0;
	while (s[index] != '\0')
	{
		newstr[index] = f(index, s[index]);
		index++;
	}
	newstr[index] = '\0';
	return (newstr);
}
/*
int main()
{
	char const	  str[40] = "Die katze hat das Pizza gegessen";
	char	(*fptr)(unsigned int, char);
	
	fptr = &testfunc;
	printf("%s", ft_strmapi(str, fptr));
	return (0);
}*/
