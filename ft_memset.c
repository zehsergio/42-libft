/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-ju <jdias-ju@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:18:09 by jdias-ju          #+#    #+#             */
/*   Updated: 2025/11/18 18:18:09 by jdias-ju         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The function ft_memset fills the first len bytes of the memory area
	pointed	to by dest with the byte c. Both dest and c are interpreted as 
	unsigned char.

	RETURN VALUE :
	A pointer to memory area s.
*/

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	size_t			i;	
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)dest;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
