#include <unistd.h>
#define SIZE 11

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb);

int		main(void)
{
	int tests[] = {-2147483648, -56547, -50, 0, 5, 10, 15, 100, 120, 123, 2147483648};
	for (int i = 0; i < SIZE; i++)
	{
		printf("'%i' printed: ", tests[i]);
		ft_putnbr(tests[i]);
		printf("\n");
	}	
}
