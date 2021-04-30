/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 10:05:03 by gponti-s          #+#    #+#             */
/*   Updated: 2020/11/02 14:09:49 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int		n;
	int		r;

	n = 0;
	if (str[n] == 0)
	{
		r = 1;
	}
	else
	{
		while (str[n] != '\0')
		{
			if (str[n] >= 65 && str[n] <= 90)
			{
				r = 1;
				n++;
			}
			else
			{
				r = 0;
				break ;
			}
		}
	}
	return (r);
}
