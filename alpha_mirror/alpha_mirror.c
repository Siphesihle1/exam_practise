/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:46:15 by smthethw          #+#    #+#             */
/*   Updated: 2020/01/27 17:08:15 by smthethw         ###   ########.fr       */
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

int		get_index(char c)
{
	if (is_upper(c))	
		return (c - 'A');
	else if (is_lower(c))
		return (c - 'a');
	return (-1);
}

int		get_ref_count(char c)
{
	if (get_index(c) >= 0 && get_index(c) <= 25)
		return (25 - (2 * get_index(c)));
	else
		return (0);
}

void	reflect(char *str)
{
	int i = 0;
	while (str[i])
	{
		str[i] += get_ref_count(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		reflect(av[1]);
		ft_putstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
