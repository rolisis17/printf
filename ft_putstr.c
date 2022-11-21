/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:42:06 by dcella-d          #+#    #+#             */
/*   Updated: 2022/11/18 18:41:19 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	f;

	f = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[f])
		ft_putchar(s[f++]);
	return (f);
}
