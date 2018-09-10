#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a = 1337;
	int b = 42;

	printf("%i / %i is ", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%i and the remainder is %i", a, b);

	return (0);
}
