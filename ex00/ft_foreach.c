#include <stdio.h>

void	ft_putchar(int a)
{
	printf("%d\n", a*a);
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;;
	}
}

int	main(void)
{
	int	tab[5] = {1,2,3,4,5};

	ft_foreach(tab, 5, &ft_putchar);
}