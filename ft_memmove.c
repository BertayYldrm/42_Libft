/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildir <beyildir@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 06:56:10 by beyildir          #+#    #+#             */
/*   Updated: 2022/07/08 07:08:34 by beyildir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{	
	unsigned char		*dstt;
	unsigned char		*srcc;

	dstt = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (len--)
			*(dstt + len) = *(srcc + len);
		return (dst);
	}
	else
		return (ft_memcpy(dst, src, len));
}
