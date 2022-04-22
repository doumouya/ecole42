#include <unistd.h>
#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	 ptr = (unsigned long) &addr;
	char hexadd[17], hexchar[4];
	
	
	printf("%lu", ptr);
	size--;
	while (size >= 0)
	{
		if (ptr % 16 < 10)
			hexadd[size] = ptr % 16 + '0';
		else
			hexadd[size] = ptr % 16 + 'W';
		size--;
		ptr /= 16; 
	} 
	
	for (int i = 0; hexadd[i] != '\0'; i++)
		write(1, &hexadd[i], 1);
	return (addr);	
}

int	main()
{
	char str[] = "Bonjour les amin";

	ft_print_memory(&str, 17);	
}
