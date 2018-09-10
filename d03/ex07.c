#include <unistd.h>

int	ft_putchar(char l)
{
	write(1, &l, 1);
	return (0);
}

char	*ft_strrev(char *str);

int   main(void)
{
	char str[] = "!idheM ,em a s'tI";
	printf("'%s' reverse is ", str);
	printf("'%s'\n", ft_strrev(str));
	return (0);
}
