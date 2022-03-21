/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:10:45 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/10 15:10:50 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applies a function (*f) to each index of a string (*s)

void	ft_striter(char *s, void (*f)(char *))
{
	int		i;

	i = 0;
	if (s && f)
		while (*(s + i))
			f(s + i++);
}
