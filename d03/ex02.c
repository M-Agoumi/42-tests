#include <stdio.h>

void	ft_swap(int *a, int *b);

int main(void)
{
	int a = 1337;
	int b = 42;

	printf("%i - %i\n", a, b);
	ft_swap(&a, &b);
	printf("%i - %i\n", a, b);
	return (0);
}
