/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:20:51 by gponti-s          #+#    #+#             */
/*   Updated: 2020/10/29 21:25:46 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str(char *str2);

int		ft_str_is_alpha(char *str)
{
	int n;
	int r;

	n = 0;
	if (str[n] == 0)
	{
		r = 1;
	}
	else
	{
		r = ft_str(str);
	}
	return (r);
}

int		ft_str(char *str2)
{
	int		m;
	int		rr;

	m = 0;
	while (str2[m] != '\0')
	{
		if ((str2[m] >= 65 && str2[m] <= 91) ||
		(str2[m] >= 97 && str2[m] <= 122) ||
		(str2[m] == 127))
		{
			rr = 1;
			m++;
		}
		else
		{
			rr = 0;
			break ;
		}
	}
	return (rr);
}
