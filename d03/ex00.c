#include <stdio.h>

void	ft_ft(int *nbr);

int   main(void)
{
  int nb = 1337;
  printf("Before: %i\n", nb);
  ft_ft(&nb);
  printf("After: %i\n", nb);
  return (0);
}
