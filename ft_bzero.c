/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelivan <vpelivan@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 12:21:24 by vpelivan          #+#    #+#             */
/*   Updated: 2019/02/25 12:38:55 by vpelivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	t_bzero			*t_bzero_s;
	unsigned char	*uchar_s;
	size_t			i;

	t_bzero_s = (t_bzero *)s;
	uchar_s = (unsigned char *)s;
	i = n - (n % sizeof(t_bzero));
	while (i < n)
		uchar_s[i++] = 0;
	n /= sizeof(t_bzero);
	while (n)
		t_bzero_s[--n] = 0;
}
