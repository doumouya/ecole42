#include <stdio.h>

int	check_sort(int *tab, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (tab[i] > tab[i + 1])
			return (0); 
	}
	return (1);
}

int	main()
{
	int size = 5;
	int tab[5] = { 34, 25, 2, 15, 1 };
	
	while (check_sort(tab, size) == 0)
	{
		for (int i = 0; i < size - 1; i++)
		{
			if (tab[i] > tab[i + 1])
			{
				int tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
		}
	}	
	
	for (int i = 0; i < size; i++)
		printf("%d ", tab[i]);

	return (0);
}
