/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 14:43:38 by smthethw          #+#    #+#             */
/*   Updated: 2020/01/27 14:54:40 by smthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		is_upper(char c)
{
	return (c >= 65 && c <= 90);
}

int		is_lower(char c)
{
	return (c >= 97 && c <= 122);
}

void	rot_13(char *str)
{
	while(*str)
	{
		if (is_upper(*str))
			*str = (((*str - 'A') + 13) % 26) + 'A';
		else if (is_lower(*str))
			*str = (((*str - 'a') + 13) % 26) + 'a';
		str++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		rot_13(av[1]);
		ft_putstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
