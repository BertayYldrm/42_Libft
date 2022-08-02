/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildir <beyildir@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 07:05:53 by beyildir          #+#    #+#             */
/*   Updated: 2022/07/08 07:05:54 by beyildir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nbayt, size_t size)
{
	void	*str;

	str = malloc(size * nbayt);
	if (!str)
		return (str);
	return (ft_memset(str, 0, size * nbayt));
}
