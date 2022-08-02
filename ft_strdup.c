/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildir <beyildir@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 07:10:56 by beyildir          #+#    #+#             */
/*   Updated: 2022/07/08 07:10:57 by beyildir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	size_t		len;
	char		*str2;

	len = ft_strlen(str1) + 1;
	str2 = malloc(sizeof(char) * len);
	if (!str2)
		return (0);
	return (ft_memcpy(str2, str1, len));
}
