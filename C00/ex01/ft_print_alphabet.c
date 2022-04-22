#include <unistd.h>
#include <stdlib.h>

int	main(void)
{
	char	*tab;
	char	c;
	int	i;

	i = 0;
	tab = (char*)malloc(sizeof(char) * 27);
	c = 'a';
	while (i < 26)
	{
		tab[i] = c;
		c++;
		i++;
	}
	i = 0;
	while (i < 26)
	{	
		write(1, &tab[i], 1);
		i++;
	}
	free(tab);
	return (0);
}
