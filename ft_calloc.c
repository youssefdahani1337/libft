/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:37:34 by yodahani          #+#    #+#             */
/*   Updated: 2022/10/26 20:05:41 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*mycalloc;
	size_t	i;

	i = 0;
	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);
	mycalloc = (char *)malloc(count * size);
	if (!mycalloc)
		return (NULL);
	while (i < (count * size))
		mycalloc[i ++] = '\0';
	return ((void *)mycalloc);
}
