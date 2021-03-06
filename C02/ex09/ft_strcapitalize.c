/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 13:22:44 by gponti-s          #+#    #+#             */
/*   Updated: 2020/11/02 15:57:03 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	letter(char c)
{
	return (((c >= 'a') && (c <= 'z')) ||
			((c >= 'A') && (c <= 'Z')) ||
			((c >= '0') && (c <= '9')));
}

char	*ft_strcapitalize(char *str)
{
	int		n;

	n = 0;
	if ((str[0] != '\0') && (str[0] >= 'a') && (str[0] <= 'z'))
	{
		str[0] -= 32;
		n++;
	}
	else if ((str[0] != '\0') && (str[0] >= 'A') && (str[0] <= 'Z'))
	{
		n++;
	}
	while (str[n] != '\0')
	{
		if ((!letter(str[n - 1])) && (str[n] >= 'a') && (str[n] <= 'z'))
		{
			str[n] -= 32;
		}
		else if ((letter(str[n - 1])) && (str[n] >= 'A') && (str[n] <= 'Z'))
		{
			str[n] += 32;
		}
		n++;
	}
	return (str);
}
