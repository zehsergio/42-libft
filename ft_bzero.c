/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-ju <jdias-ju@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 10:03:14 by jdias-ju          #+#    #+#             */
/*   Updated: 2025/11/18 10:04:29 by jdias-ju         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

/* A function that sets each byte of a memory area to zero,
based on the size (number of bytes) passed.
char	*p; Pointer used to walk through the memory, byte by byte.
p = (char *)s; Copy the memory address from 's'
and tell the compiler to treat it as a char pointer (cast). */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
