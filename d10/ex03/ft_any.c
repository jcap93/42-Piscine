/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 13:27:35 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/25 13:27:37 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	while (*tab != 0)
	{
		if (f(*(tab++)))
		{
			return (1);
		}
	}
	return (0);
}
