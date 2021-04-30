/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 13:23:35 by gponti-s          #+#    #+#             */
/*   Updated: 2020/11/04 15:24:14 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	t;
	unsigned int	z;

	i = 0;
	t = 0;
	z = 0;
	while (src[i] != '\0')
		i++;
	if (size == 0)
		return (i);
	while (dest[t] != '\0')
		t++;
	while ((src[z] != '\0') && ((t + z) < (size - 1)))
	{
		dest[t + z] = src[z];
		z++;
	}
	dest[t + z] = '\0';
	if (size >= t)
		return (i + t);
	else
		return (i + size);
}
