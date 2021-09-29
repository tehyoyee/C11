#include <stdio.h>

int	ft_len_is_even(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i % 2);
}

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	cnt;
	int	i;

	cnt = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			cnt++;
		i++;
	}
	return (cnt);
}

int	main(void)
{
	char	*tab[6] = {"rasdb", "agrs", "drdsd", "safgf"};

	printf("%d", ft_count_if(tab, 4, &ft_len_is_even));
}