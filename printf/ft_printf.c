/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 05:04:39 by mokhalil          #+#    #+#             */
/*   Updated: 2022/11/02 01:05:21 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printfconv(char ch , va_list a)
{
    int i;

    i = 0;
    if (ch == 'c')
        i += ft_putchar(va_arg(a, int));    
    else if (ch == 'p')
        {
            i += ft_putstr("0x");
            i+=adress((unsigned long)va_arg(a,void *), "0123456789abcdef");
        }
    else if (ch == 'd' || ch == 'i')
        i += ft_putnbr_b(va_arg(a, int), "0123456789");
    else if (ch == 'x')
        i += ft_putnbr_b(va_arg(a,unsigned int), "0123456789abcdef");
    else if (ch == 'X')
        i += ft_putnbr_b(va_arg(a,unsigned int), "0123456789ABCDEF");
    else if (ch == 's')
        i += ft_putstr(va_arg(a,char *));
    else if (ch == 'u')
        i += ft_putnbr_b(va_arg(a, unsigned int), "0123456789");
    else if (ch == '%')
        i += ft_putchar('%');
    return (i);
}
    

int ft_printf(const char *str, ...)
{
    va_list arg;
    int i;
    int count;
    
    i = 0;
    count = 0;
    va_start(arg, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            i++;
            count += ft_printfconv(str[i] , arg);
        }
        else
            count += ft_putchar(str[i]);
        i++;
    }
    va_end(arg);
    return (count);  
}