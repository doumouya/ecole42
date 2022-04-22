#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	while (j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}	
	return (dest);
}
