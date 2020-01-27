/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 17:25:27 by smthethw          #+#    #+#             */
/*   Updated: 2020/01/27 17:30:42 by smthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		palindrome(char *str, int size)
{
	if (size == 0 || size == 1)
		return (1);
	if (str[0] == str[size - 1])
		return (palindrome(str + 1, size - 2));
	else
		return (0);
}

int		main()
{
	printf("%i\n", palindrome("nursesrun", 9));
	return (0);
}


