#include <stdio.h>

int	ft_is_prime(int nb);

int main(void)
{	
	for (int i = 0; i < 1000; i++)
	{
		printf("%i prime? %i\n", i, ft_is_prime(i));
	}
	return (0);
	
}
