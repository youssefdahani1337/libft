/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:04:10 by yodahani          #+#    #+#             */
/*   Updated: 2022/10/25 10:31:49 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned int	l;
	char			*src1;
	char			*dst1;

	if (!src && n == 0)
		return (dst);
	else if (!src && !dst)
		return (0);
	i = 0;
	src1 = (char *) src;
	dst1 = (char *) dst;
	l = 1;
	while (l++ <= n)
	{
		dst1[i] = src1[i];
		i ++;
	}
	return ((void *)dst1);
}
