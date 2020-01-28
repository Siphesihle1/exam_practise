/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 11:05:46 by smthethw          #+#    #+#             */
/*   Updated: 2020/01/28 14:08:01 by smthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int sign = 1;
	int sum = 0;

	while (*str && *str == ' ')
	{
		str++;
	}
	if (*str && *str == '-')
	{
		sign *= -1;
		str++;
	}
	while (*str)
	{
		if (c >= '0' && c <= '9')
		{
			sum = (sum * 10) + (*c_str - '0');
		}
		else
		{
			return (sum * sign);
		}
		str++;
	}
	return (sum * sign);
}
