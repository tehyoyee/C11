#include <stdio.h>
int	func(int a, int b)
{
	if (a < b)
		return (-1);
	if (a == b)
		return (0);
	else
		return (1);
}

int	ft_is_ascending(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_descending(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	return (ft_is_ascending(tab, length, f) || ft_is_descending(tab, length, f));
}

int	main(void)
{
	int tab[7] = {10, 3, 2, -1, -6, -10};
	printf("%d", ft_is_sort(tab, 6, &func));
}