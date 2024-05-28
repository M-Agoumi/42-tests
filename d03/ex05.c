#include <unistd.h>

int	ft_putchar(char l)
{
	write(1, &l, 1);
	return (0);
}

void	ft_putstr(char *str);

int 	main(void)
{
	ft_putstr("This is a loooooooooong ass string that will be printed to the fucking screen, we don't care about any characters\n see? I just printed a new line like a boss...");
	return (0);
}
