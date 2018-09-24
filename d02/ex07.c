#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n);

int		main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: %s n\n", argv[0]);
		return (-1);
	}
	int n = atoi(argv[1]);
	if (n <= 0 || n >= 10)
	{
		printf("Invalid n: 0 < n < 10");
		return (-2);
	}

	ft_print_combn(n);
}
