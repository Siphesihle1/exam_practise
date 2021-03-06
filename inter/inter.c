#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	contains(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char *ft_charcpy(char src, char *dest)
{
	int i = 0;
	
	while (dest[i])
		i++;
	dest[i] = src;
	dest[i + 1] = '\0';
}

void	inter(char *str1, char *str2, char *dest)
{	
	int i = 0;
	while (str1[i])
	{
		if (contains(str2, str1[i]) &&\
				!(contains(dest, str1[i])))
		{
			//write(1, &str1[i], 1);
			ft_charcpy(str1[i], dest);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		char str[sizeof(av[1])];
		
		str[0] = '\0';
		inter(av[1], av[2], str);
		ft_putstr(str);
	}
	write(1, "\n", 1);
	return (0);
}
