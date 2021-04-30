/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 20:20:11 by gponti-s          #+#    #+#             */
/*   Updated: 2020/10/29 12:02:10 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int n;
	int temp;
	int size2;

	size2 = size - 1;
	n = 0;
	while (n < size2)
	{
		temp = tab[n];
		tab[n] = tab[size2];
		tab[size2] = temp;
		n++;
		size2--;
	}
}
