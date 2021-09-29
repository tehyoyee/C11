#include <stdlib.h>
#include <stdio.h>

int	ft_putchar(int a)
{
	return (a * a);
}

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*ret;
	int	i;

	ret = malloc(sizeof(int) * (length + 1));
	if (!ret)
		return (0);
	i = 0;
	while (i < length)
	{
		ret[i] = f(tab[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	*arr;
	int	i = 0;

	arr = ft_map(tab, 5, &ft_putchar);
	while (arr[i])
	{
		printf("%d\n", arr[i]);
		i++;
	}	
}