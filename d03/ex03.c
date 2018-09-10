#include <stdio.h>

int	ft_putchar(char l)
{
	write(1, &l, 1);
	return (0);
}

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a = 1337;
	int b = 42;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("%i / %i is %i and the remainder is %i", a, b, div, mod);
	return (0);
}
