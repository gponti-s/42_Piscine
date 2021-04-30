/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 20:11:58 by gponti-s          #+#    #+#             */
/*   Updated: 2020/11/08 17:31:17 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int factorial;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	factorial = 1;
	while (nb != 0)
	{
		factorial = factorial * nb;
		nb--;
	}
	return (factorial);
}
