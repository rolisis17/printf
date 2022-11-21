/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:09:56 by dcella-d          #+#    #+#             */
/*   Updated: 2022/11/18 18:41:40 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int	count;
	count = 0;
	va_start(args,str);
	count += ft_count(str, args);
	va_end(args);
	return (count);
}

/* int	main()
{
	int res = ft_printf("Poarr %c\n", 'a');
	int res2 = ft_printf("Poarr %s\n", "Carai irmao");
	int res3 = ft_printf("Poarr %d\n", 12342);
	int res4 = ft_printf("Poarr %u\n", -12341);
	printf("%d\n", res);
	printf("%d\n", res2);
	printf("%d\n", res3);
	printf("%d\n", res4);
} */