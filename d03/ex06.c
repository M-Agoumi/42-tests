#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char str[] = "It's a me, Mehdi!\n";
	printf("'%s' is %i characters long\n", str, ft_strlen(str));
	return (0);
}
