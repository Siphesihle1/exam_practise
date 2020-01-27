/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 10:46:30 by smthethw          #+#    #+#             */
/*   Updated: 2020/01/27 14:28:40 by smthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		ft_strlen(char *str)
{
		int i;

		i = 0;
		while (str[i])
		{
			i++;
		}
		return (i);

}

int		contains(char *str1, char *str2)
{
	int i = 0;
	int j = 0;
	int start_i = 0;

	if (ft_strlen(str2) > ft_strlen(str1))
		return (-1);
	while (str1[i])
	{
		if (str1[i] == str2[0])
		{
			j = 0;
			start_i = i;
			while (str2[j])
			{
				if (str1[i] != str2[j])
					break;
				i++;
				j++;
			}
			if (!str2[j])
				return (start_i);
		}
		else
		{
			i++;
		}
	}	
	return (-1);
}

void	replace(char *str1, char *str2, int index)
{
	int i = index;
	int j = 0;
	int count = ft_strlen(str2);
	while (j < count)
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 4 && (ft_strlen(av[2]) == ft_strlen(av[3])))
	{
		int index = contains(av[1], av[2]);
		if (index != -1)
		{
			while (index != -1)
			{
				replace(av[1], av[3], index);
				index = contains(av[1], av[2]);	
			}
			ft_putstr(av[1]);
		}
		else
		{
			ft_putstr("Nothing worked\n");
			ft_putstr(av[1]);
		}

	}
	write (1, "\n", 1);
}
