/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:46:35 by preina-g          #+#    #+#             */
/*   Updated: 2024/02/20 15:32:59 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

void	*ft_memcpy(void *to, const void *from, size_t num)
{
	size_t				i;
	unsigned char		*t;
	unsigned const char	*f;

	f = (unsigned char *)from;
	t = (unsigned char *)to;
	i = 0;
	while (to == from || !num)
	{
		return (to);
	}
	while (i < num)
	{
		t[i] = f[i];
		i++;
	}
	return (t);
}
