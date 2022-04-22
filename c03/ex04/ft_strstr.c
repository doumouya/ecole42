#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i = 0;
	int j = 0;
	int k = 0;
	
	if (!to_find[j])
		return (str);
	while (str[i] != to_find[j])
		i++;
	k = i;
	while (to_find[j])
	{
		if (str[i] != to_find[j])
			return (NULL);
		i++;
		j++;
	}
	return (&str[k]);
}

int	main()
{
	char str[]= "Hello mon python";
	char to_find[] = "\0";

	printf("%s\n", ft_strstr(str, to_find));
}
