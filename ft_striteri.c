/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-ju <jdias-ju@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:57:44 by jdias-ju          #+#    #+#             */
/*   Updated: 2025/11/18 13:58:49 by jdias-ju         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The function ft_striteri applies the given function f to each
	character in the ORIGINAL given string s.
	The difference between ft_striteri and ft_strmapi is that ft_striteri 
	doesn't return anything and works directly on the original string.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
