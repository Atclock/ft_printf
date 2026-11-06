/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 16:04:04 by yabuzano          #+#    #+#             */
/*   Updated: 2026/11/06 16:04:08 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int		a;
	int		b;
	int		x;
	char	*null_str;
	void	*null_ptr;

	x = 42;
	null_str = NULL;
	null_ptr = NULL;

	printf("\n========== NORMAL TEXT ==========\n");
	a = ft_printf("FT: Hello World!\n");
	b = printf("PF: Hello World!\n");
	printf("returns -> ft:%d printf:%d\n", a - 4, b - 4);

	printf("\n========== CHAR ==========\n");
	ft_printf("FT: [%c] [%c]\n", 'A', 'z');
	printf("PF: [%c] [%c]\n", 'A', 'z');

	printf("\n========== STRING ==========\n");
	ft_printf("FT: [%s] [%s] [%s]\n", "hello", "", null_str);
	printf("PF: [%s] [%s] [%s]\n", "hello", "", null_str);

	printf("\n========== DECIMAL ==========\n");
	ft_printf("FT: [%d] [%d] [%d]\n", 0, 42, -42);
	printf("PF: [%d] [%d] [%d]\n", 0, 42, -42);

	ft_printf("FT: [%d] [%d]\n", INT_MIN, INT_MAX);
	printf("PF: [%d] [%d]\n", INT_MIN, INT_MAX);

	printf("\n========== INTEGER ==========\n");
	ft_printf("FT: [%i] [%i] [%i]\n", 0, -12345, 12345);
	printf("PF: [%i] [%i] [%i]\n", 0, -12345, 12345);

	printf("\n========== UNSIGNED ==========\n");
	ft_printf("FT: [%u] [%u]\n", 0u, UINT_MAX);
	printf("PF: [%u] [%u]\n", 0u, UINT_MAX);

	printf("\n========== HEX LOWER ==========\n");
	ft_printf("FT: [%x] [%x] [%x]\n", 0u, 255u, UINT_MAX);
	printf("PF: [%x] [%x] [%x]\n", 0u, 255u, UINT_MAX);

	printf("\n========== HEX UPPER ==========\n");
	ft_printf("FT: [%X] [%X] [%X]\n", 0u, 255u, UINT_MAX);
	printf("PF: [%X] [%X] [%X]\n", 0u, 255u, UINT_MAX);

	printf("\n========== POINTER ==========\n");
	ft_printf("FT: [%p] [%p]\n", &x, null_ptr);
	printf("PF: [%p] [%p]\n", &x, null_ptr);

	printf("\n========== PERCENT ==========\n");
	ft_printf("FT: [%%] [%%%%] [%%%%%%]\n");
	printf("PF: [%%] [%%%%] [%%%%%%]\n");

	printf("\n========== MIXED ==========\n");
	a = ft_printf("A:%c B:%s C:%d D:%u E:%x F:%X G:%p %%\n",
			'Z', "hello", -42, 42u, 255u, 255u, &x);
	b = printf("A:%c B:%s C:%d D:%u E:%x F:%X G:%p %%\n",
			'Z', "hello", -42, 42u, 255u, 255u, &x);

	printf("mixed return values -> ft:%d printf:%d\n", a, b);

	return (0);
}
