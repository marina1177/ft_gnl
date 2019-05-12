/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharity <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 09:27:56 by bcharity          #+#    #+#             */
/*   Updated: 2019/05/01 10:38:16 by bcharity         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	if (!n)
		return (1);
	while (*s1 == *s2 && (--n > 0) && (*s1 != '\0' || *s2 != '\0'))
	{
		s1++;
		s2++;
	}
	if (*(s1) != *(s2))
	{
		return (0);
	}
	return (1);
}
