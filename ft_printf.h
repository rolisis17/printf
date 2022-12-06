/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:32:58 by dcella-d          #+#    #+#             */
/*   Updated: 2022/11/22 12:10:59 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);

int	ft_count(const char *str, va_list args);

int	ft_flags(char uck, va_list args);

int	ft_putchar(char c);

int	ft_putstr(char *s);

int	ft_putnbr(int nbr);

int	ft_putunsigned(unsigned int nbr);

int	ft_puthexa(unsigned int nbr, char *base);

int	ft_putaddress(unsigned long int nbr, char *base, int safe);

#endif