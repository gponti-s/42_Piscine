/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 09:55:36 by gponti-s          #+#    #+#             */
/*   Updated: 2020/11/04 15:24:53 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		z;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		z = 0;
		while (str[i + z] != '\0' && str[i + z] == to_find[z])
		{
			if (to_find[z + 1] == '\0')
			{
				return (&str[i]);
			}
			z++;
		}
		i++;
	}
	return (0);
}