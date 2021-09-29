#include <stdio.h>
#include "ft.h"

void	get_op(char *str, int *op)
{	
	int i = 0;
	if (*str == '+')
	{
		*op = 0;
		return ;
	}
	else if (*str == '-')
	{
		*op = 1;
		return ;
	}
	else if (str[0] == '*')
	{
		*op = 2;
		return ;
	}
	else if (*str == '/')
	{
		*op = 3;
		return ;
	}
	else if (*str == '%')
	{
		*op = 4;
		return ;
	}
	else
	{
		*op = -1;
		return ;
	}
}

int main(int argc, char *argv[])
{

	void	(*oper[5])(int, int);
	int		op;

	oper[0] = &ft_sum;
	oper[1] = &ft_sub;
	oper[2] = &ft_mul;
	oper[3] = &ft_div;
	oper[4] = &ft_mod;
	get_op(argv[2], &op);
	printf("op = %d\n", op);
	if (argc == 4)
	{
		if (op == -1)
			ft_putnbr(0);
		else
			oper[op](ft_atoi(argv[1]), ft_atoi(argv[3]));
		ft_putchar('\n');
	}
}