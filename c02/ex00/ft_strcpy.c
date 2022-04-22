#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i, len;
	char err[] = "Error";
	
	len = ft_strlen(dest) - ft_strlen(src);
	if (len >= 0)
		for (i = 0; src[i] != '\0'; i++)
			dest[i] = src[i];
	else
		for (i = 0; err[i] != '\0'; i++)
			dest[i] = err[i];
	dest[i] = '\0';
	return (dest); 
}

int	main()
{
	char dest[8] = "0000000";
	char dest_[8] = "0000000";;
	char src[5] = "hell";
	char src_[5] = "hell";

	ft_strcpy(dest, src);
//	strcpy(dest_, src_);
	printf("%s\n", dest);
//	printf("%s\n", dest_);
	return (0);
}
