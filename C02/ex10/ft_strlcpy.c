/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:59:58 by gponti-s          #+#    #+#             */
/*   Updated: 2020/11/01 20:28:11 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		n;

	n = 0;
	while (src[n] != '\0' && (n + 1) < size)
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	while (src[n] != '\0')
	{
		n++;
	}
	return (n);
}
