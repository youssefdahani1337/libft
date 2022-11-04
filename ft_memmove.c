/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:36:49 by yodahani          #+#    #+#             */
/*   Updated: 2022/10/26 12:26:28 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	unsigned int	l;
	char			*src1;
	char			*dst1;

	if (!src && len == 0)
		return (dst);
	else if (!src && !dst)
		return (0);
	i = 0;
	l = len;
	src1 = (char *) src;
	dst1 = (char *) dst;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	else
	{
		while (l --)
		{
			dst1[l] = src1[l];
		}
		return (dst);
	}
}
