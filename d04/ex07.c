#include <stdio.h>

int	ft_find_next_prime(int nb);

int main(void)
{
	int i = 900;
	printf("Next prime for %i is %i\n", i, ft_find_next_prime(i));	
	return (0);
}
