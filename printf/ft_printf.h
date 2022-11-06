/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 22:58:48 by mokhalil          #+#    #+#             */
/*   Updated: 2022/11/02 01:05:35 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include<unistd.h>
#include<stdlib.h>
#include<stdarg.h>
#include <stdio.h>

int ft_putchar(char k);
int ft_putstr(char *s);
int ft_strlen(char *str);
int ft_putnbr_b(long nb, char *base);
int adress(unsigned long nb, char *base);
int ft_printf(const char *str, ...);
int ft_printfconv(char ch,va_list a);
#endif