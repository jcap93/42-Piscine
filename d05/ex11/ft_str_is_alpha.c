/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 15:39:40 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/19 15:39:49 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 || str[i] >= 97) && (str[i] <= 122
		|| str[i] <= 90))
		{
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (1);
}