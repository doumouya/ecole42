#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char dest[10] = "Hello";
	char src[7] = " World";
	
	ft_strcat(dest, src);
	
	printf("%s\n", dest);
}
