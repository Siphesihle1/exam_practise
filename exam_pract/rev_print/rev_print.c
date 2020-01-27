/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 14:29:08 by smthethw          #+#    #+#             */
/*   Updated: 2020/01/27 14:42:09 by smthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	reverse(char *str)
{
	if (!(*(str + 1)))
	{
		write(1, str, 1);
		return ;
	}
	reverse(str + 1);
	write(1, str, 1);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		reverse(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
