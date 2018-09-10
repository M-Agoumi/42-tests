#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int 	main(void)
{
	int nb = 1337;
	int *pt = &nb;
	int **pt1 = &pt;
	int ***pt2 = &pt1;
	int ****pt3 = &pt2;
	int *****pt4 = &pt3;
	int ******pt5 = &pt4;
	int *******pt6 = &pt5;
	int ********pt7 = &pt6;
	int *********pt8 = &pt7;
	printf("Before: %i\n");
	ft_ultimate_ft(pt8);
	printf("After: %i\n", nb);
	return (0);
}
