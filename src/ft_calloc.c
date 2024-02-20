/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:21:38 by preina-g          #+#    #+#             */
/*   Updated: 2024/02/20 15:32:59 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*array;

	array = malloc(nitems * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, (nitems * size));
	return (array);
}
