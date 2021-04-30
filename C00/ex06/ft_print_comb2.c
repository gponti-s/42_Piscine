/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 11:00:12 by gponti-s          #+#    #+#             */
/*   Updated: 2020/10/27 21:23:41 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(char x, char y, char z, char w);
void	ft_print_comb3(char c, char d, char e, char f);

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '8')
		{
			ft_print_comb3(a, b, '0', '0');
			b++;
		}
		a++;
	}
}

void	ft_print_comb3(char c, char d, char e, char f)
{
	e = 0;
	while (e <= '9')
	{
		f = e + 1;
		while (f <= '9')
		{
			print_number(c, d, e, f);
			if (d == '9')
			{
				break ;
			}
			f++;
		}
		e++;
	}
}

void	print_number(char x, char y, char z, char w)
{
	if (!(x == '0' && y == '0' && z == '0' && w == '0'))
	{
		write(1, &x, 1);
		write(1, &y, 1);
		write(1, " ", 1);
		write(1, &z, 1);
		write(1, &w, 1);
		if (!(x == '9' && y == '8' && z == '9' && w == '9'))
		{
			write(1, ", ", 2);
		}
	}
}

int main()
{
	ft_print_comb2();
	return (0);
}
