/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 20:10:59 by mbutt             #+#    #+#             */
/*   Updated: 2019/04/24 18:12:19 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	if (s)
		while (*s)
			write(1, s++, 1);
/*
** Using ft_strlen, instead of while loop;
	if(s)
		write(1, s, ft_strlen(s));
*/
}
/*
** int main (void)
** {
**	char *string1 = "Testing";
**	ft_putstr(string1);
**	return(0);
**}
*/
