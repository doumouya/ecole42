#include <stdio.h>

int	main()
{
	int tab[15];

	for (int i = 0; i < 15; i++)
		tab[i] = i + 3;
	int len = 14;
	
	for (int i = 0; i <= len; i++)
                printf("%d", tab[i]);
	printf("\n");

	for (int i = 0, j = len; i < j; i++)
	{
		int tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		j--;
	}

	for (int i = 0; i <= len; i++)
		printf("%d", tab[i]);
	return (0);
}
