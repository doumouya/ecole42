#include <unistd.h>

void ft_putnbr(int n)
{
	char c[3];
	c[0] = n / 10 + '0';
	c[1] = n % 10 + '0';
	c[2] = '\0';
	for (int i = 0; i < 2; i++)
		write(1, &c[i], 1);  
} 

void	ft_print_comb2(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		j = i + 1;
		for (; j < 100; j++)
		{
			ft_putnbr(i);
			write(1, " ", 1);
			ft_putnbr(j);
			if (i != 98)
				write(1, ", ", 2);
		}
	}
}

int	main()
{
	ft_print_comb2();
	return (0);
}
