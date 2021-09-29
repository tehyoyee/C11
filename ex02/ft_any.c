#include <stdlib.h>
#include <stdio.h>

int	ft_len_is_even(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i % 2);
}

int	ft_any(char **tab, int(*f)(char*))
{
	while (*tab)
	{
		if (f(*tab) != 0)
			return (1);
		tab++;
	}
	return (0);
}

int	main(void)
{
	char	*tab[6] = {"asdb", "agsd", "ddsd", "safgf"};

	printf("%d", ft_any(tab, &ft_len_is_even));
}