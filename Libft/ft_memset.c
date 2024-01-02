/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:29:55 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/02 13:45:36 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			c_char;
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	c_char = (unsigned char) c;
	ptr = (unsigned char *) b;
	while (i < len)
	{
		ptr[i] = c_char;
		i++;
	}
	return (b);
}
