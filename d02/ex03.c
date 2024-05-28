#include <stdio.h>
#define SIZE 8

void	ft_is_negative(int n);

int		main(void)
{
	int tests[] = {-2147483648, -230, -20, 0, 10, 325, 1000, 2147483647};

	for (int i = 0; i < SIZE; i++)
	{
		printf("%i is ", tests[i]);
		ft_is_negative(tests[i]);
		printf("\n");
	}
}
