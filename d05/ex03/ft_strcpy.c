/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 11:16:34 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/18 11:16:36 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	upper_rot(char str)
{
	str = str - 65;
	str = ((str + 42) % 26);
	str = str + 65;
	return (str);
}

char	lower_rot(char str)
{
	str = str - 97;
	str = ((str + 42) % 26);
	str = str + 97;
	return (str);
}

char	rotate(char str)
{
	if (str >= 65 && str <= 90)
		return (upper_rot(str));
	else if (str >= 97 && str <= 122)
		return (lower_rot(str));
	else
		return (str);
}

char	*ft_rot42(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		str[i] = rotate(str[i]);
		i++;
	}
	return (str);
}

int main()
{
	char str = "Josh";
	printf("%s\n", ft_rot42(str);
}