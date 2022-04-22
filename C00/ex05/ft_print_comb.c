#include <unistd.h>
#include <stdio.h>

int     atoi(char *tab)
{
        int res;
        res = 0;
        for (int i = 0; i < 3; i++)
                res = res * 10 + tab[i] - '0';
        return res;
}

void	check_print(int val)
{
	char	c[4];
	int	check = 1, comma;
	
	comma = val;
	for (int i = 0; i < 3; i++)
	{
		c[i] = val % 10 + '0';
		val /= 10;
	}
	c[3] = '\0';

	for (int i = 0; i < 2; i++)
	{
		if (c[i] <= c[i + 1])
			check = 0;
		else
		{
			if (check)
				check = 1;
		}
	}
	
	if (check == 1)
	{
		for (int i = 2; i >= 0; i--)
			write(1, &c[i], 1);
		
		if (comma != 789)
			write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char tab[4];
	int	val;
	
	for (char i = '0'; i < '3'; i++)
		tab[i - '0'] = i;
	tab[3] = '\0';
	val = atoi(tab);
	for (; val < 790; val++)
		check_print(val);
}

int	main()
{
	ft_print_comb();
	return (0);
}
