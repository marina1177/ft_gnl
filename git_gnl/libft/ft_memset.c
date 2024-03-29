/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharity <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 15:39:23 by bcharity          #+#    #+#             */
/*   Updated: 2019/05/09 11:27:52 by bcharity         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int c, size_t n)
{
	unsigned char *p;

	p = (unsigned char *)dst;
	while (n)
	{
		*p++ = (unsigned char)c;
		n--;
	}
	return ((void*)dst);
}
