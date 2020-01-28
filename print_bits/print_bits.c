/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 14:10:32 by smthethw          #+#    #+#             */
/*   Updated: 2020/01/28 15:06:45 by smthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int index[] = {128, 64, 32, 16, 8, 4, 2, 1};
	int i = 0;

	while (i < 8)
	{
		if ((octet - index[i]) >= 0)
		{
			write(1, "1", 1);
			octet -= index[i];
		}
		else
		{
			write(1, "0", 1);
		}
		i++;
	}
}

int		main()
{
	print_bits(5);
	return (0);
}

