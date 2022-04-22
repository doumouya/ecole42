#include <unistd.h>

void	putnbr_base(int c)
{
	char	tab[4];
	
	tab[0] = '\\';
	for (int i = 2; i > 0; i--)
	{
		if (c % 16 < 10)
			tab[i] = c + '0';
		else
			tab[i] = c + 'W';
		c /= 16;
	}
	tab[3] = '\0';
	
	for (int i = 0; tab[i] != '\0'; i++)
		write(1, &tab[i], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	for (i = 0; str[i] != '\0'; i++)
	{
		int	c;

		if (str[i] >= ' ' && str[i] < '~')
			write(1, &str[i], 1);
		else
		{
			c = str[i];
			putnbr_base(c);
		}
	}
}

int	main()
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return (0);
}
