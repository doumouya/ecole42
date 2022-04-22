#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main()
{
	int	*tab;
	int	i;

	tab = (int*)malloc(sizeof(int) * 10);

	for (i = 0; i < 10; i++)
		tab[i] = i;

	for (i = 0; i < 10; i++)
		printf("%d", tab[i]);

	free(tab);
	return (0);
}
