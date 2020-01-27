/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 10:12:57 by smthethw          #+#    #+#             */
/*   Updated: 2020/01/27 10:19:51 by smthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		aff_a(char *string)
{
	while (*string)
	{
		if (*string == 'a')
		{
			return (1);
		}
		string++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		if (aff_a(av[1]))
		{
			write(1, "a", 1); 
		}
	}
	else
	{
		write(1, "a", 1);
	}
	write(1, "\n", 1);
	return (0);
}
