/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 11:09:02 by gponti-s          #+#    #+#             */
/*   Updated: 2020/11/09 15:38:46 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		n;

	n = 0;
	while ((s1[n] != '\0') && (s2[n] != '\0') && (s1[n] == s2[n]))
		n++;
	return (s1[n] - s2[n]);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int		n;
	char	*temp;

	n = 1;
	while (n < (argc - 1))
	{
		if (ft_strcmp(argv[n], argv[n + 1]) <= 0)
			n++;
		else if (ft_strcmp(argv[n], argv[n + 1]) > 0)
		{
			temp = argv[n];
			argv[n] = argv[n + 1];
			argv[n + 1] = temp;
			n = 1;
		}
	}
	n = 1;
	while (n < (argc))
	{
		ft_putstr(argv[n]);
		n++;
	}
	return (0);
}
