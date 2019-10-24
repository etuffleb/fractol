/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_letter_counter.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etuffleb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 12:12:17 by etuffleb          #+#    #+#             */
/*   Updated: 2018/12/04 12:12:29 by etuffleb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_letter_counter(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}
