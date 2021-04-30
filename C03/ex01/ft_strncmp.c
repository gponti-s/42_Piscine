/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 11:14:12 by gponti-s          #+#    #+#             */
/*   Updated: 2020/11/05 10:11:59 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	t;

	t = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[t] != '\0' && s2[t] != '\0')
	{
		if (s1[t] == s2[t] && (t < (n - 1)))
		{
			t++;
		}
		else
		{
			return (s1[t] - s2[t]);
		}
	}
	return (s1[t] - s2[t]);
}

int main()
{
    char a[] = "testes";
	char b[] = "teste testes";
	char c[] = "testes";
	char d[] = "teste testes";
	
	printf("%d\n", ft_strncmp(a, b, 10));
    printf("%d", strncmp(c, d, 10));
    return (0);
}
