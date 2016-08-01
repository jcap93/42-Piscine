/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 12:34:56 by jcapling          #+#    #+#             */
/*   Updated: 2016/07/28 12:34:58 by jcapling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <errno.h>

# define BUFF_SIZE 4096

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_error(char *name, char *file, int num);
int		ft_atoi(char *str);
int		ft_size(char *file);
int		ft_tail(int sign, int size, int tail, char *file);

#endif
