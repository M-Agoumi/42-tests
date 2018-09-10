#include <stdio.h>
#define SIZE 11

int		ft_atoi(char *str);

int main(void)
{
  char *tests[] = {"1337", "-1337", "0", "-0", "+1337", "+0", "+1337stop42", "-1337stop42", "1337stop42", "stop42", "stop"};
  for (int i = 0; i < SIZE; i++)
  {
    printf("'%s' ft_atoi: %i\n", tests[i], ft_atoi(tests[i]));
  }
	return (0);
}
