#include <stdio.h>
#define SIZE 23

int   ft_sort_integer_table(int *tab, int size);

void  print_arr(int *arr, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("| %i ", arr[i]);
		i++;
	}
	printf("|\n");
}

int   main(void)
{
	int arr[] = {9, 8, -45, 32, -100, 84, 42, 1337, 199, 0, 87, 6, 1, 56, 89, 75, 35, 60, 90, 78, 66, -1337, -42};
	print_arr(arr, SIZE);
	ft_sort_integer_table(arr, SIZE);
	print_arr(arr, SIZE);
	return (0);
}
