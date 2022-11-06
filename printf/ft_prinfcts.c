/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinfcts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:00:19 by mokhalil          #+#    #+#             */
/*   Updated: 2022/11/02 01:03:33 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_putchar(char k)
{
    write(1, &k, 1);
	return(1);
}

int    ft_putstr(char *s)
{
    size_t i;
    
    i = 0;
	if(s)
	{
		while(s[i])
		{
			write(1, &s[i], 1);
			i++;
		}
		return(i);
	}
	return(ft_putstr("(null)"));
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
	
}

int	ft_putnbr_b(long nb, char *base)
{
	int		lenght_base;
	int count;
	
	count = 0;
	lenght_base = ft_strlen(base);
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		count += 1;
	}
	if (nb >= lenght_base)
	{
		count +=ft_putnbr_b(nb / lenght_base,base);
		count +=ft_putnbr_b(nb % lenght_base,base);
	}
	if (nb < lenght_base)
		 {
			count +=ft_putchar(base[nb]);
		 }
	return (count);
}

int	adress(unsigned long nb, char *base)
{
	unsigned long		lenght_base;
	int count;
	
	count = 0;
	lenght_base = ft_strlen(base);
	
	if (nb >= lenght_base)
	{
		count +=adress(nb / lenght_base,base);
		count +=adress(nb % lenght_base,base);
	}
	if (nb < lenght_base)
		 {
			count +=ft_putchar(base[nb]);
		 }
	return (count);
}
