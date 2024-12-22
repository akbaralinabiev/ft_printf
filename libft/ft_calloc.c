/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akbarali <akbarali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:08:34 by anabiev           #+#    #+#             */
/*   Updated: 2024/12/22 03:15:06 by akbarali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	total;

	if (!nmemb || !size)
		return (malloc(0));
	if (nmemb && (size * nmemb) / nmemb != size)
		return (NULL);
	total = nmemb * size;
	p = (void *)malloc(total);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}
