/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:54:33 by dcella-d          #+#    #+#             */
/*   Updated: 2022/11/22 12:12:12 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int nbr)
{
	unsigned long	nb;
	int				res;

	nb = nbr;
	res = 0;
	if (nb > 9)
		res += ft_putunsigned(nb / 10);
	res += ft_putchar(nb % 10 + 48);
	return (res);
}
