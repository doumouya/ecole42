#include <stdio.h>
#include <string.h>


int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main()
{
	char s1[7] = "Helloh";
	char s2[7] = "Helioh";


	printf("%d\n", ft_strncmp(s1, s2, 9));
	printf("%d\n", strncmp(s1, s2, 9));

}
